/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.65.2
        Device            :  PIC16F1769
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.45
        MPLAB 	          :  MPLAB X 4.15	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set RA0 procedures
#define RA0_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define RA0_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define RA0_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define RA0_GetValue()              PORTAbits.RA0
#define RA0_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define RA0_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define RA0_SetPullup()             do { WPUAbits.WPUA0 = 1; } while(0)
#define RA0_ResetPullup()           do { WPUAbits.WPUA0 = 0; } while(0)
#define RA0_SetAnalogMode()         do { ANSELAbits.ANSA0 = 1; } while(0)
#define RA0_SetDigitalMode()        do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set RA1 procedures
#define RA1_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define RA1_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define RA1_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define RA1_GetValue()              PORTAbits.RA1
#define RA1_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define RA1_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define RA1_SetPullup()             do { WPUAbits.WPUA1 = 1; } while(0)
#define RA1_ResetPullup()           do { WPUAbits.WPUA1 = 0; } while(0)
#define RA1_SetAnalogMode()         do { ANSELAbits.ANSA1 = 1; } while(0)
#define RA1_SetDigitalMode()        do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set SDO aliases
#define SDO_TRIS                 TRISAbits.TRISA2
#define SDO_LAT                  LATAbits.LATA2
#define SDO_PORT                 PORTAbits.RA2
#define SDO_WPU                  WPUAbits.WPUA2
#define SDO_OD                   ODCONAbits.ODA2
#define SDO_ANS                  ANSELAbits.ANSA2
#define SDO_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define SDO_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define SDO_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define SDO_GetValue()           PORTAbits.RA2
#define SDO_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define SDO_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define SDO_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define SDO_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define SDO_SetPushPull()        do { ODCONAbits.ODA2 = 0; } while(0)
#define SDO_SetOpenDrain()       do { ODCONAbits.ODA2 = 1; } while(0)
#define SDO_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define SDO_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set SCK aliases
#define SCK_TRIS                 TRISCbits.TRISC0
#define SCK_LAT                  LATCbits.LATC0
#define SCK_PORT                 PORTCbits.RC0
#define SCK_WPU                  WPUCbits.WPUC0
#define SCK_OD                   ODCONCbits.ODC0
#define SCK_ANS                  ANSELCbits.ANSC0
#define SCK_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define SCK_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define SCK_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define SCK_GetValue()           PORTCbits.RC0
#define SCK_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define SCK_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define SCK_SetPullup()          do { WPUCbits.WPUC0 = 1; } while(0)
#define SCK_ResetPullup()        do { WPUCbits.WPUC0 = 0; } while(0)
#define SCK_SetPushPull()        do { ODCONCbits.ODC0 = 0; } while(0)
#define SCK_SetOpenDrain()       do { ODCONCbits.ODC0 = 1; } while(0)
#define SCK_SetAnalogMode()      do { ANSELCbits.ANSC0 = 1; } while(0)
#define SCK_SetDigitalMode()     do { ANSELCbits.ANSC0 = 0; } while(0)

// get/set SS aliases
#define SS_TRIS                 TRISCbits.TRISC1
#define SS_LAT                  LATCbits.LATC1
#define SS_PORT                 PORTCbits.RC1
#define SS_WPU                  WPUCbits.WPUC1
#define SS_OD                   ODCONCbits.ODC1
#define SS_ANS                  ANSELCbits.ANSC1
#define SS_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define SS_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define SS_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define SS_GetValue()           PORTCbits.RC1
#define SS_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define SS_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define SS_SetPullup()          do { WPUCbits.WPUC1 = 1; } while(0)
#define SS_ResetPullup()        do { WPUCbits.WPUC1 = 0; } while(0)
#define SS_SetPushPull()        do { ODCONCbits.ODC1 = 0; } while(0)
#define SS_SetOpenDrain()       do { ODCONCbits.ODC1 = 1; } while(0)
#define SS_SetAnalogMode()      do { ANSELCbits.ANSC1 = 1; } while(0)
#define SS_SetDigitalMode()     do { ANSELCbits.ANSC1 = 0; } while(0)

// get/set RST aliases
#define RST_TRIS                 TRISCbits.TRISC4
#define RST_LAT                  LATCbits.LATC4
#define RST_PORT                 PORTCbits.RC4
#define RST_WPU                  WPUCbits.WPUC4
#define RST_OD                   ODCONCbits.ODC4
#define RST_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define RST_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define RST_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define RST_GetValue()           PORTCbits.RC4
#define RST_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define RST_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define RST_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define RST_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)
#define RST_SetPushPull()        do { ODCONCbits.ODC4 = 0; } while(0)
#define RST_SetOpenDrain()       do { ODCONCbits.ODC4 = 1; } while(0)

// get/set SDI aliases
#define SDI_TRIS                 TRISCbits.TRISC5
#define SDI_LAT                  LATCbits.LATC5
#define SDI_PORT                 PORTCbits.RC5
#define SDI_WPU                  WPUCbits.WPUC5
#define SDI_OD                   ODCONCbits.ODC5
#define SDI_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define SDI_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define SDI_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define SDI_GetValue()           PORTCbits.RC5
#define SDI_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define SDI_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define SDI_SetPullup()          do { WPUCbits.WPUC5 = 1; } while(0)
#define SDI_ResetPullup()        do { WPUCbits.WPUC5 = 0; } while(0)
#define SDI_SetPushPull()        do { ODCONCbits.ODC5 = 0; } while(0)
#define SDI_SetOpenDrain()       do { ODCONCbits.ODC5 = 1; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/