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
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.7
        Device            :  PIC16F1619
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.31 and above
        MPLAB 	          :  MPLAB X 5.45	
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

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set D4 aliases
#define D4_TRIS                 TRISBbits.TRISB4
#define D4_LAT                  LATBbits.LATB4
#define D4_PORT                 PORTBbits.RB4
#define D4_WPU                  WPUBbits.WPUB4
#define D4_OD                   ODCONBbits.ODB4
#define D4_ANS                  ANSELBbits.ANSB4
#define D4_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define D4_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define D4_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define D4_GetValue()           PORTBbits.RB4
#define D4_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define D4_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define D4_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define D4_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define D4_SetPushPull()        do { ODCONBbits.ODB4 = 0; } while(0)
#define D4_SetOpenDrain()       do { ODCONBbits.ODB4 = 1; } while(0)
#define D4_SetAnalogMode()      do { ANSELBbits.ANSB4 = 1; } while(0)
#define D4_SetDigitalMode()     do { ANSELBbits.ANSB4 = 0; } while(0)

// get/set D5 aliases
#define D5_TRIS                 TRISBbits.TRISB5
#define D5_LAT                  LATBbits.LATB5
#define D5_PORT                 PORTBbits.RB5
#define D5_WPU                  WPUBbits.WPUB5
#define D5_OD                   ODCONBbits.ODB5
#define D5_ANS                  ANSELBbits.ANSB5
#define D5_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define D5_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define D5_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define D5_GetValue()           PORTBbits.RB5
#define D5_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define D5_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define D5_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define D5_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define D5_SetPushPull()        do { ODCONBbits.ODB5 = 0; } while(0)
#define D5_SetOpenDrain()       do { ODCONBbits.ODB5 = 1; } while(0)
#define D5_SetAnalogMode()      do { ANSELBbits.ANSB5 = 1; } while(0)
#define D5_SetDigitalMode()     do { ANSELBbits.ANSB5 = 0; } while(0)

// get/set D6 aliases
#define D6_TRIS                 TRISBbits.TRISB6
#define D6_LAT                  LATBbits.LATB6
#define D6_PORT                 PORTBbits.RB6
#define D6_WPU                  WPUBbits.WPUB6
#define D6_OD                   ODCONBbits.ODB6
#define D6_ANS                  ANSELBbits.ANSB6
#define D6_SetHigh()            do { LATBbits.LATB6 = 1; } while(0)
#define D6_SetLow()             do { LATBbits.LATB6 = 0; } while(0)
#define D6_Toggle()             do { LATBbits.LATB6 = ~LATBbits.LATB6; } while(0)
#define D6_GetValue()           PORTBbits.RB6
#define D6_SetDigitalInput()    do { TRISBbits.TRISB6 = 1; } while(0)
#define D6_SetDigitalOutput()   do { TRISBbits.TRISB6 = 0; } while(0)
#define D6_SetPullup()          do { WPUBbits.WPUB6 = 1; } while(0)
#define D6_ResetPullup()        do { WPUBbits.WPUB6 = 0; } while(0)
#define D6_SetPushPull()        do { ODCONBbits.ODB6 = 0; } while(0)
#define D6_SetOpenDrain()       do { ODCONBbits.ODB6 = 1; } while(0)
#define D6_SetAnalogMode()      do { ANSELBbits.ANSB6 = 1; } while(0)
#define D6_SetDigitalMode()     do { ANSELBbits.ANSB6 = 0; } while(0)

// get/set D7 aliases
#define D7_TRIS                 TRISBbits.TRISB7
#define D7_LAT                  LATBbits.LATB7
#define D7_PORT                 PORTBbits.RB7
#define D7_WPU                  WPUBbits.WPUB7
#define D7_OD                   ODCONBbits.ODB7
#define D7_ANS                  ANSELBbits.ANSB7
#define D7_SetHigh()            do { LATBbits.LATB7 = 1; } while(0)
#define D7_SetLow()             do { LATBbits.LATB7 = 0; } while(0)
#define D7_Toggle()             do { LATBbits.LATB7 = ~LATBbits.LATB7; } while(0)
#define D7_GetValue()           PORTBbits.RB7
#define D7_SetDigitalInput()    do { TRISBbits.TRISB7 = 1; } while(0)
#define D7_SetDigitalOutput()   do { TRISBbits.TRISB7 = 0; } while(0)
#define D7_SetPullup()          do { WPUBbits.WPUB7 = 1; } while(0)
#define D7_ResetPullup()        do { WPUBbits.WPUB7 = 0; } while(0)
#define D7_SetPushPull()        do { ODCONBbits.ODB7 = 0; } while(0)
#define D7_SetOpenDrain()       do { ODCONBbits.ODB7 = 1; } while(0)
#define D7_SetAnalogMode()      do { ANSELBbits.ANSB7 = 1; } while(0)
#define D7_SetDigitalMode()     do { ANSELBbits.ANSB7 = 0; } while(0)

// get/set EN aliases
#define EN_TRIS                 TRISCbits.TRISC6
#define EN_LAT                  LATCbits.LATC6
#define EN_PORT                 PORTCbits.RC6
#define EN_WPU                  WPUCbits.WPUC6
#define EN_OD                   ODCONCbits.ODC6
#define EN_ANS                  ANSELCbits.ANSC6
#define EN_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define EN_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define EN_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define EN_GetValue()           PORTCbits.RC6
#define EN_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define EN_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define EN_SetPullup()          do { WPUCbits.WPUC6 = 1; } while(0)
#define EN_ResetPullup()        do { WPUCbits.WPUC6 = 0; } while(0)
#define EN_SetPushPull()        do { ODCONCbits.ODC6 = 0; } while(0)
#define EN_SetOpenDrain()       do { ODCONCbits.ODC6 = 1; } while(0)
#define EN_SetAnalogMode()      do { ANSELCbits.ANSC6 = 1; } while(0)
#define EN_SetDigitalMode()     do { ANSELCbits.ANSC6 = 0; } while(0)

// get/set RS aliases
#define RS_TRIS                 TRISCbits.TRISC7
#define RS_LAT                  LATCbits.LATC7
#define RS_PORT                 PORTCbits.RC7
#define RS_WPU                  WPUCbits.WPUC7
#define RS_OD                   ODCONCbits.ODC7
#define RS_ANS                  ANSELCbits.ANSC7
#define RS_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define RS_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define RS_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define RS_GetValue()           PORTCbits.RC7
#define RS_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define RS_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define RS_SetPullup()          do { WPUCbits.WPUC7 = 1; } while(0)
#define RS_ResetPullup()        do { WPUCbits.WPUC7 = 0; } while(0)
#define RS_SetPushPull()        do { ODCONCbits.ODC7 = 0; } while(0)
#define RS_SetOpenDrain()       do { ODCONCbits.ODC7 = 1; } while(0)
#define RS_SetAnalogMode()      do { ANSELCbits.ANSC7 = 1; } while(0)
#define RS_SetDigitalMode()     do { ANSELCbits.ANSC7 = 0; } while(0)

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