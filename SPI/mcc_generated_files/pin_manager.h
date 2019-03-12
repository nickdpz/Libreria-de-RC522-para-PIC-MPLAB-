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
        Device            :  PIC16F1709
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

// get/set RC1 procedures
#define RC1_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define RC1_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define RC1_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define RC1_GetValue()              PORTCbits.RC1
#define RC1_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define RC1_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define RC1_SetPullup()             do { WPUCbits.WPUC1 = 1; } while(0)
#define RC1_ResetPullup()           do { WPUCbits.WPUC1 = 0; } while(0)
#define RC1_SetAnalogMode()         do { ANSELCbits.ANSC1 = 1; } while(0)
#define RC1_SetDigitalMode()        do { ANSELCbits.ANSC1 = 0; } while(0)

// get/set RC2 procedures
#define RC2_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define RC2_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define RC2_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define RC2_GetValue()              PORTCbits.RC2
#define RC2_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define RC2_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define RC2_SetPullup()             do { WPUCbits.WPUC2 = 1; } while(0)
#define RC2_ResetPullup()           do { WPUCbits.WPUC2 = 0; } while(0)
#define RC2_SetAnalogMode()         do { ANSELCbits.ANSC2 = 1; } while(0)
#define RC2_SetDigitalMode()        do { ANSELCbits.ANSC2 = 0; } while(0)

// get/set RST aliases
#define RST_TRIS                 TRISCbits.TRISC3
#define RST_LAT                  LATCbits.LATC3
#define RST_PORT                 PORTCbits.RC3
#define RST_WPU                  WPUCbits.WPUC3
#define RST_OD                   ODCONCbits.ODC3
#define RST_ANS                  ANSELCbits.ANSC3
#define RST_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define RST_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define RST_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define RST_GetValue()           PORTCbits.RC3
#define RST_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define RST_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define RST_SetPullup()          do { WPUCbits.WPUC3 = 1; } while(0)
#define RST_ResetPullup()        do { WPUCbits.WPUC3 = 0; } while(0)
#define RST_SetPushPull()        do { ODCONCbits.ODC3 = 0; } while(0)
#define RST_SetOpenDrain()       do { ODCONCbits.ODC3 = 1; } while(0)
#define RST_SetAnalogMode()      do { ANSELCbits.ANSC3 = 1; } while(0)
#define RST_SetDigitalMode()     do { ANSELCbits.ANSC3 = 0; } while(0)

// get/set SS aliases
#define SS_TRIS                 TRISCbits.TRISC4
#define SS_LAT                  LATCbits.LATC4
#define SS_PORT                 PORTCbits.RC4
#define SS_WPU                  WPUCbits.WPUC4
#define SS_OD                   ODCONCbits.ODC4
#define SS_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define SS_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define SS_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define SS_GetValue()           PORTCbits.RC4
#define SS_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define SS_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define SS_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define SS_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)
#define SS_SetPushPull()        do { ODCONCbits.ODC4 = 0; } while(0)
#define SS_SetOpenDrain()       do { ODCONCbits.ODC4 = 1; } while(0)

// get/set SDO aliases
#define SDO_TRIS                 TRISCbits.TRISC5
#define SDO_LAT                  LATCbits.LATC5
#define SDO_PORT                 PORTCbits.RC5
#define SDO_WPU                  WPUCbits.WPUC5
#define SDO_OD                   ODCONCbits.ODC5
#define SDO_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define SDO_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define SDO_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define SDO_GetValue()           PORTCbits.RC5
#define SDO_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define SDO_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define SDO_SetPullup()          do { WPUCbits.WPUC5 = 1; } while(0)
#define SDO_ResetPullup()        do { WPUCbits.WPUC5 = 0; } while(0)
#define SDO_SetPushPull()        do { ODCONCbits.ODC5 = 0; } while(0)
#define SDO_SetOpenDrain()       do { ODCONCbits.ODC5 = 1; } while(0)

// get/set SDI aliases
#define SDI_TRIS                 TRISCbits.TRISC6
#define SDI_LAT                  LATCbits.LATC6
#define SDI_PORT                 PORTCbits.RC6
#define SDI_WPU                  WPUCbits.WPUC6
#define SDI_OD                   ODCONCbits.ODC6
#define SDI_ANS                  ANSELCbits.ANSC6
#define SDI_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define SDI_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define SDI_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define SDI_GetValue()           PORTCbits.RC6
#define SDI_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define SDI_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define SDI_SetPullup()          do { WPUCbits.WPUC6 = 1; } while(0)
#define SDI_ResetPullup()        do { WPUCbits.WPUC6 = 0; } while(0)
#define SDI_SetPushPull()        do { ODCONCbits.ODC6 = 0; } while(0)
#define SDI_SetOpenDrain()       do { ODCONCbits.ODC6 = 1; } while(0)
#define SDI_SetAnalogMode()      do { ANSELCbits.ANSC6 = 1; } while(0)
#define SDI_SetDigitalMode()     do { ANSELCbits.ANSC6 = 0; } while(0)

// get/set SCK aliases
#define SCK_TRIS                 TRISCbits.TRISC7
#define SCK_LAT                  LATCbits.LATC7
#define SCK_PORT                 PORTCbits.RC7
#define SCK_WPU                  WPUCbits.WPUC7
#define SCK_OD                   ODCONCbits.ODC7
#define SCK_ANS                  ANSELCbits.ANSC7
#define SCK_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define SCK_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define SCK_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define SCK_GetValue()           PORTCbits.RC7
#define SCK_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define SCK_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define SCK_SetPullup()          do { WPUCbits.WPUC7 = 1; } while(0)
#define SCK_ResetPullup()        do { WPUCbits.WPUC7 = 0; } while(0)
#define SCK_SetPushPull()        do { ODCONCbits.ODC7 = 0; } while(0)
#define SCK_SetOpenDrain()       do { ODCONCbits.ODC7 = 1; } while(0)
#define SCK_SetAnalogMode()      do { ANSELCbits.ANSC7 = 1; } while(0)
#define SCK_SetDigitalMode()     do { ANSELCbits.ANSC7 = 0; } while(0)

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