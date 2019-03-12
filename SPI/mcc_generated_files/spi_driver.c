/*
    (c) 2016 Microchip Technology Inc. and its subsidiaries. You may use this
    software and any derivatives exclusively with Microchip products.

    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
    WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
    PARTICULAR PURPOSE, OR ITS INTERACTION WITH MICROCHIP PRODUCTS, COMBINATION
    WITH ANY OTHER PRODUCTS, OR USE IN ANY APPLICATION.

    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
    BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
    FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
    ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
    THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.

    MICROCHIP PROVIDES THIS SOFTWARE CONDITIONALLY UPON YOUR ACCEPTANCE OF THESE
    TERMS.
*/


#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include "mcc.h"
#include "spi_driver.h"

#pragma warning disable 520        

inline void spi_close(void)
{
    SSP1CON1bits.SSPEN = 0;
}

//con1 == SSPxCON1, stat == SSPxSTAT, add == SSPxADD
typedef struct { uint8_t con1; uint8_t stat; uint8_t add; } spi_configuration_t;
static const spi_configuration_t spi_configuration[] = {   
    {0x0, 0x40, 0x4f }
};

//Setup SPI for Master Mode
__bit spi_master_open(spi_modes spiUniqueConfiguration)
{
    if(!SSP1CON1bits.SSPEN)
    {
        //setup PPS pins
        SSPDATPPS = 0x11;   //RC1->MSSP:SDI;    
        RA2PPS = 0x10;   //RA2->MSSP:SCK;    
        RC5PPS = 0x12;   //RC5->MSSP:SDO;    
        SSPCLKPPS = 0x02;   //RA2->MSSP:SCK;    

        //setup SPI
        SSP1STAT = spi_configuration[spiUniqueConfiguration].stat;
        SSP1CON1 = (uint8_t) (spi_configuration[spiUniqueConfiguration].con1 | 0x2A);
        SSP1CON2 = 0x00;
        SSP1ADD  = (uint8_t) (spi_configuration[spiUniqueConfiguration].add | 0);
        TRISCbits.TRISC2=0;//RST
        TRISCbits.TRISC0=0;//SS
        TRISCbits.TRISC1 = 1;//SDI
        TRISCbits.TRISC5 = 0;//SDO
        TRISAbits.TRISA2 = 0;//SCK
        return true;
    }
    return false;
}

//Setup SPI for Slave Mode
__bit spi_slave_open(spi_modes spiUniqueConfiguration)
{
    if(!SSP1CON1bits.SSPEN)
    {
        //setup PPS pins
        SSPCLKPPS = 2;
        SSPDATPPS = 17;
        RA2PPS = 16;
        RC5PPS = 18;

        SSP1STAT = spi_configuration[spiUniqueConfiguration].stat;
        SSP1CON1 = (uint8_t) (spi_configuration[spiUniqueConfiguration].con1 | 0x25);
        SSP1CON2 = 0x00;
        SSP1ADD  = (uint8_t) (spi_configuration[spiUniqueConfiguration].add | 0);
        
        TRISAbits.TRISA2 = 1;
        return true;
    }
    return false;
}

// Full Duplex SPI Functions
uint8_t spi_exchangeByte(uint8_t b)
{
    SSP1BUF = b;
    while(!PIR1bits.SSP1IF);
    PIR1bits.SSP1IF = 0;
    return SSP1BUF;
}

void spi_exchangeBlock(void *block, size_t blockSize)
{
    uint8_t *data = block;
    while(blockSize--)
    {
        *data = spi_exchangeByte(*data );
        data++;
    }
}

// Half Duplex SPI Functions
void spi_writeBlock(void *block, size_t blockSize)
{
    uint8_t *data = block;
    while(blockSize--)
    {
        spi_exchangeByte(*data++);
    }
}

void spi_readBlock(void *block, size_t blockSize)
{
    uint8_t *data = block;
    while(blockSize--)
    {
        *data++ = spi_exchangeByte(0);
    }
}
