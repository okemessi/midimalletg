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
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.4
        Device            :  PIC16F18857
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.20 and above
        MPLAB 	          :  MPLAB X 5.40	
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

// get/set AN_KEY1 aliases
#define AN_KEY1_TRIS                 TRISAbits.TRISA0
#define AN_KEY1_LAT                  LATAbits.LATA0
#define AN_KEY1_PORT                 PORTAbits.RA0
#define AN_KEY1_WPU                  WPUAbits.WPUA0
#define AN_KEY1_OD                   ODCONAbits.ODCA0
#define AN_KEY1_ANS                  ANSELAbits.ANSA0
#define AN_KEY1_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define AN_KEY1_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define AN_KEY1_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define AN_KEY1_GetValue()           PORTAbits.RA0
#define AN_KEY1_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define AN_KEY1_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define AN_KEY1_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define AN_KEY1_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define AN_KEY1_SetPushPull()        do { ODCONAbits.ODCA0 = 0; } while(0)
#define AN_KEY1_SetOpenDrain()       do { ODCONAbits.ODCA0 = 1; } while(0)
#define AN_KEY1_SetAnalogMode()      do { ANSELAbits.ANSA0 = 1; } while(0)
#define AN_KEY1_SetDigitalMode()     do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set AN_KEY2 aliases
#define AN_KEY2_TRIS                 TRISAbits.TRISA1
#define AN_KEY2_LAT                  LATAbits.LATA1
#define AN_KEY2_PORT                 PORTAbits.RA1
#define AN_KEY2_WPU                  WPUAbits.WPUA1
#define AN_KEY2_OD                   ODCONAbits.ODCA1
#define AN_KEY2_ANS                  ANSELAbits.ANSA1
#define AN_KEY2_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define AN_KEY2_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define AN_KEY2_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define AN_KEY2_GetValue()           PORTAbits.RA1
#define AN_KEY2_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define AN_KEY2_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define AN_KEY2_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define AN_KEY2_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define AN_KEY2_SetPushPull()        do { ODCONAbits.ODCA1 = 0; } while(0)
#define AN_KEY2_SetOpenDrain()       do { ODCONAbits.ODCA1 = 1; } while(0)
#define AN_KEY2_SetAnalogMode()      do { ANSELAbits.ANSA1 = 1; } while(0)
#define AN_KEY2_SetDigitalMode()     do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set RA2 procedures
#define RA2_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define RA2_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define RA2_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define RA2_GetValue()              PORTAbits.RA2
#define RA2_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define RA2_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define RA2_SetPullup()             do { WPUAbits.WPUA2 = 1; } while(0)
#define RA2_ResetPullup()           do { WPUAbits.WPUA2 = 0; } while(0)
#define RA2_SetAnalogMode()         do { ANSELAbits.ANSA2 = 1; } while(0)
#define RA2_SetDigitalMode()        do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set RA3 procedures
#define RA3_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define RA3_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define RA3_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define RA3_GetValue()              PORTAbits.RA3
#define RA3_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define RA3_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define RA3_SetPullup()             do { WPUAbits.WPUA3 = 1; } while(0)
#define RA3_ResetPullup()           do { WPUAbits.WPUA3 = 0; } while(0)
#define RA3_SetAnalogMode()         do { ANSELAbits.ANSA3 = 1; } while(0)
#define RA3_SetDigitalMode()        do { ANSELAbits.ANSA3 = 0; } while(0)

// get/set AN_KEY3 aliases
#define AN_KEY3_TRIS                 TRISAbits.TRISA4
#define AN_KEY3_LAT                  LATAbits.LATA4
#define AN_KEY3_PORT                 PORTAbits.RA4
#define AN_KEY3_WPU                  WPUAbits.WPUA4
#define AN_KEY3_OD                   ODCONAbits.ODCA4
#define AN_KEY3_ANS                  ANSELAbits.ANSA4
#define AN_KEY3_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define AN_KEY3_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define AN_KEY3_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define AN_KEY3_GetValue()           PORTAbits.RA4
#define AN_KEY3_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define AN_KEY3_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define AN_KEY3_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define AN_KEY3_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define AN_KEY3_SetPushPull()        do { ODCONAbits.ODCA4 = 0; } while(0)
#define AN_KEY3_SetOpenDrain()       do { ODCONAbits.ODCA4 = 1; } while(0)
#define AN_KEY3_SetAnalogMode()      do { ANSELAbits.ANSA4 = 1; } while(0)
#define AN_KEY3_SetDigitalMode()     do { ANSELAbits.ANSA4 = 0; } while(0)

// get/set AN_KEY4 aliases
#define AN_KEY4_TRIS                 TRISAbits.TRISA5
#define AN_KEY4_LAT                  LATAbits.LATA5
#define AN_KEY4_PORT                 PORTAbits.RA5
#define AN_KEY4_WPU                  WPUAbits.WPUA5
#define AN_KEY4_OD                   ODCONAbits.ODCA5
#define AN_KEY4_ANS                  ANSELAbits.ANSA5
#define AN_KEY4_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define AN_KEY4_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define AN_KEY4_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define AN_KEY4_GetValue()           PORTAbits.RA5
#define AN_KEY4_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define AN_KEY4_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define AN_KEY4_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define AN_KEY4_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define AN_KEY4_SetPushPull()        do { ODCONAbits.ODCA5 = 0; } while(0)
#define AN_KEY4_SetOpenDrain()       do { ODCONAbits.ODCA5 = 1; } while(0)
#define AN_KEY4_SetAnalogMode()      do { ANSELAbits.ANSA5 = 1; } while(0)
#define AN_KEY4_SetDigitalMode()     do { ANSELAbits.ANSA5 = 0; } while(0)

// get/set AN_KEY6 aliases
#define AN_KEY6_TRIS                 TRISAbits.TRISA6
#define AN_KEY6_LAT                  LATAbits.LATA6
#define AN_KEY6_PORT                 PORTAbits.RA6
#define AN_KEY6_WPU                  WPUAbits.WPUA6
#define AN_KEY6_OD                   ODCONAbits.ODCA6
#define AN_KEY6_ANS                  ANSELAbits.ANSA6
#define AN_KEY6_SetHigh()            do { LATAbits.LATA6 = 1; } while(0)
#define AN_KEY6_SetLow()             do { LATAbits.LATA6 = 0; } while(0)
#define AN_KEY6_Toggle()             do { LATAbits.LATA6 = ~LATAbits.LATA6; } while(0)
#define AN_KEY6_GetValue()           PORTAbits.RA6
#define AN_KEY6_SetDigitalInput()    do { TRISAbits.TRISA6 = 1; } while(0)
#define AN_KEY6_SetDigitalOutput()   do { TRISAbits.TRISA6 = 0; } while(0)
#define AN_KEY6_SetPullup()          do { WPUAbits.WPUA6 = 1; } while(0)
#define AN_KEY6_ResetPullup()        do { WPUAbits.WPUA6 = 0; } while(0)
#define AN_KEY6_SetPushPull()        do { ODCONAbits.ODCA6 = 0; } while(0)
#define AN_KEY6_SetOpenDrain()       do { ODCONAbits.ODCA6 = 1; } while(0)
#define AN_KEY6_SetAnalogMode()      do { ANSELAbits.ANSA6 = 1; } while(0)
#define AN_KEY6_SetDigitalMode()     do { ANSELAbits.ANSA6 = 0; } while(0)

// get/set AN_KEY5 aliases
#define AN_KEY5_TRIS                 TRISAbits.TRISA7
#define AN_KEY5_LAT                  LATAbits.LATA7
#define AN_KEY5_PORT                 PORTAbits.RA7
#define AN_KEY5_WPU                  WPUAbits.WPUA7
#define AN_KEY5_OD                   ODCONAbits.ODCA7
#define AN_KEY5_ANS                  ANSELAbits.ANSA7
#define AN_KEY5_SetHigh()            do { LATAbits.LATA7 = 1; } while(0)
#define AN_KEY5_SetLow()             do { LATAbits.LATA7 = 0; } while(0)
#define AN_KEY5_Toggle()             do { LATAbits.LATA7 = ~LATAbits.LATA7; } while(0)
#define AN_KEY5_GetValue()           PORTAbits.RA7
#define AN_KEY5_SetDigitalInput()    do { TRISAbits.TRISA7 = 1; } while(0)
#define AN_KEY5_SetDigitalOutput()   do { TRISAbits.TRISA7 = 0; } while(0)
#define AN_KEY5_SetPullup()          do { WPUAbits.WPUA7 = 1; } while(0)
#define AN_KEY5_ResetPullup()        do { WPUAbits.WPUA7 = 0; } while(0)
#define AN_KEY5_SetPushPull()        do { ODCONAbits.ODCA7 = 0; } while(0)
#define AN_KEY5_SetOpenDrain()       do { ODCONAbits.ODCA7 = 1; } while(0)
#define AN_KEY5_SetAnalogMode()      do { ANSELAbits.ANSA7 = 1; } while(0)
#define AN_KEY5_SetDigitalMode()     do { ANSELAbits.ANSA7 = 0; } while(0)

// get/set IO_Button3 aliases
#define IO_Button3_TRIS                 TRISBbits.TRISB0
#define IO_Button3_LAT                  LATBbits.LATB0
#define IO_Button3_PORT                 PORTBbits.RB0
#define IO_Button3_WPU                  WPUBbits.WPUB0
#define IO_Button3_OD                   ODCONBbits.ODCB0
#define IO_Button3_ANS                  ANSELBbits.ANSB0
#define IO_Button3_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define IO_Button3_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define IO_Button3_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define IO_Button3_GetValue()           PORTBbits.RB0
#define IO_Button3_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define IO_Button3_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define IO_Button3_SetPullup()          do { WPUBbits.WPUB0 = 1; } while(0)
#define IO_Button3_ResetPullup()        do { WPUBbits.WPUB0 = 0; } while(0)
#define IO_Button3_SetPushPull()        do { ODCONBbits.ODCB0 = 0; } while(0)
#define IO_Button3_SetOpenDrain()       do { ODCONBbits.ODCB0 = 1; } while(0)
#define IO_Button3_SetAnalogMode()      do { ANSELBbits.ANSB0 = 1; } while(0)
#define IO_Button3_SetDigitalMode()     do { ANSELBbits.ANSB0 = 0; } while(0)

// get/set IO_Button4 aliases
#define IO_Button4_TRIS                 TRISBbits.TRISB1
#define IO_Button4_LAT                  LATBbits.LATB1
#define IO_Button4_PORT                 PORTBbits.RB1
#define IO_Button4_WPU                  WPUBbits.WPUB1
#define IO_Button4_OD                   ODCONBbits.ODCB1
#define IO_Button4_ANS                  ANSELBbits.ANSB1
#define IO_Button4_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define IO_Button4_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define IO_Button4_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define IO_Button4_GetValue()           PORTBbits.RB1
#define IO_Button4_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define IO_Button4_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define IO_Button4_SetPullup()          do { WPUBbits.WPUB1 = 1; } while(0)
#define IO_Button4_ResetPullup()        do { WPUBbits.WPUB1 = 0; } while(0)
#define IO_Button4_SetPushPull()        do { ODCONBbits.ODCB1 = 0; } while(0)
#define IO_Button4_SetOpenDrain()       do { ODCONBbits.ODCB1 = 1; } while(0)
#define IO_Button4_SetAnalogMode()      do { ANSELBbits.ANSB1 = 1; } while(0)
#define IO_Button4_SetDigitalMode()     do { ANSELBbits.ANSB1 = 0; } while(0)

// get/set AN_Fader3 aliases
#define AN_Fader3_TRIS                 TRISBbits.TRISB2
#define AN_Fader3_LAT                  LATBbits.LATB2
#define AN_Fader3_PORT                 PORTBbits.RB2
#define AN_Fader3_WPU                  WPUBbits.WPUB2
#define AN_Fader3_OD                   ODCONBbits.ODCB2
#define AN_Fader3_ANS                  ANSELBbits.ANSB2
#define AN_Fader3_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define AN_Fader3_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define AN_Fader3_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define AN_Fader3_GetValue()           PORTBbits.RB2
#define AN_Fader3_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define AN_Fader3_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define AN_Fader3_SetPullup()          do { WPUBbits.WPUB2 = 1; } while(0)
#define AN_Fader3_ResetPullup()        do { WPUBbits.WPUB2 = 0; } while(0)
#define AN_Fader3_SetPushPull()        do { ODCONBbits.ODCB2 = 0; } while(0)
#define AN_Fader3_SetOpenDrain()       do { ODCONBbits.ODCB2 = 1; } while(0)
#define AN_Fader3_SetAnalogMode()      do { ANSELBbits.ANSB2 = 1; } while(0)
#define AN_Fader3_SetDigitalMode()     do { ANSELBbits.ANSB2 = 0; } while(0)

// get/set AN_Fader1 aliases
#define AN_Fader1_TRIS                 TRISBbits.TRISB3
#define AN_Fader1_LAT                  LATBbits.LATB3
#define AN_Fader1_PORT                 PORTBbits.RB3
#define AN_Fader1_WPU                  WPUBbits.WPUB3
#define AN_Fader1_OD                   ODCONBbits.ODCB3
#define AN_Fader1_ANS                  ANSELBbits.ANSB3
#define AN_Fader1_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define AN_Fader1_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define AN_Fader1_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define AN_Fader1_GetValue()           PORTBbits.RB3
#define AN_Fader1_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define AN_Fader1_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define AN_Fader1_SetPullup()          do { WPUBbits.WPUB3 = 1; } while(0)
#define AN_Fader1_ResetPullup()        do { WPUBbits.WPUB3 = 0; } while(0)
#define AN_Fader1_SetPushPull()        do { ODCONBbits.ODCB3 = 0; } while(0)
#define AN_Fader1_SetOpenDrain()       do { ODCONBbits.ODCB3 = 1; } while(0)
#define AN_Fader1_SetAnalogMode()      do { ANSELBbits.ANSB3 = 1; } while(0)
#define AN_Fader1_SetDigitalMode()     do { ANSELBbits.ANSB3 = 0; } while(0)

// get/set AN_Fader2 aliases
#define AN_Fader2_TRIS                 TRISBbits.TRISB4
#define AN_Fader2_LAT                  LATBbits.LATB4
#define AN_Fader2_PORT                 PORTBbits.RB4
#define AN_Fader2_WPU                  WPUBbits.WPUB4
#define AN_Fader2_OD                   ODCONBbits.ODCB4
#define AN_Fader2_ANS                  ANSELBbits.ANSB4
#define AN_Fader2_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define AN_Fader2_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define AN_Fader2_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define AN_Fader2_GetValue()           PORTBbits.RB4
#define AN_Fader2_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define AN_Fader2_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define AN_Fader2_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define AN_Fader2_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define AN_Fader2_SetPushPull()        do { ODCONBbits.ODCB4 = 0; } while(0)
#define AN_Fader2_SetOpenDrain()       do { ODCONBbits.ODCB4 = 1; } while(0)
#define AN_Fader2_SetAnalogMode()      do { ANSELBbits.ANSB4 = 1; } while(0)
#define AN_Fader2_SetDigitalMode()     do { ANSELBbits.ANSB4 = 0; } while(0)

// get/set IO_Button1 aliases
#define IO_Button1_TRIS                 TRISBbits.TRISB5
#define IO_Button1_LAT                  LATBbits.LATB5
#define IO_Button1_PORT                 PORTBbits.RB5
#define IO_Button1_WPU                  WPUBbits.WPUB5
#define IO_Button1_OD                   ODCONBbits.ODCB5
#define IO_Button1_ANS                  ANSELBbits.ANSB5
#define IO_Button1_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define IO_Button1_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define IO_Button1_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define IO_Button1_GetValue()           PORTBbits.RB5
#define IO_Button1_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define IO_Button1_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define IO_Button1_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define IO_Button1_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define IO_Button1_SetPushPull()        do { ODCONBbits.ODCB5 = 0; } while(0)
#define IO_Button1_SetOpenDrain()       do { ODCONBbits.ODCB5 = 1; } while(0)
#define IO_Button1_SetAnalogMode()      do { ANSELBbits.ANSB5 = 1; } while(0)
#define IO_Button1_SetDigitalMode()     do { ANSELBbits.ANSB5 = 0; } while(0)

// get/set IO_Button2 aliases
#define IO_Button2_TRIS                 TRISBbits.TRISB6
#define IO_Button2_LAT                  LATBbits.LATB6
#define IO_Button2_PORT                 PORTBbits.RB6
#define IO_Button2_WPU                  WPUBbits.WPUB6
#define IO_Button2_OD                   ODCONBbits.ODCB6
#define IO_Button2_ANS                  ANSELBbits.ANSB6
#define IO_Button2_SetHigh()            do { LATBbits.LATB6 = 1; } while(0)
#define IO_Button2_SetLow()             do { LATBbits.LATB6 = 0; } while(0)
#define IO_Button2_Toggle()             do { LATBbits.LATB6 = ~LATBbits.LATB6; } while(0)
#define IO_Button2_GetValue()           PORTBbits.RB6
#define IO_Button2_SetDigitalInput()    do { TRISBbits.TRISB6 = 1; } while(0)
#define IO_Button2_SetDigitalOutput()   do { TRISBbits.TRISB6 = 0; } while(0)
#define IO_Button2_SetPullup()          do { WPUBbits.WPUB6 = 1; } while(0)
#define IO_Button2_ResetPullup()        do { WPUBbits.WPUB6 = 0; } while(0)
#define IO_Button2_SetPushPull()        do { ODCONBbits.ODCB6 = 0; } while(0)
#define IO_Button2_SetOpenDrain()       do { ODCONBbits.ODCB6 = 1; } while(0)
#define IO_Button2_SetAnalogMode()      do { ANSELBbits.ANSB6 = 1; } while(0)
#define IO_Button2_SetDigitalMode()     do { ANSELBbits.ANSB6 = 0; } while(0)

// get/set IO_ShiftButton aliases
#define IO_ShiftButton_TRIS                 TRISBbits.TRISB7
#define IO_ShiftButton_LAT                  LATBbits.LATB7
#define IO_ShiftButton_PORT                 PORTBbits.RB7
#define IO_ShiftButton_WPU                  WPUBbits.WPUB7
#define IO_ShiftButton_OD                   ODCONBbits.ODCB7
#define IO_ShiftButton_ANS                  ANSELBbits.ANSB7
#define IO_ShiftButton_SetHigh()            do { LATBbits.LATB7 = 1; } while(0)
#define IO_ShiftButton_SetLow()             do { LATBbits.LATB7 = 0; } while(0)
#define IO_ShiftButton_Toggle()             do { LATBbits.LATB7 = ~LATBbits.LATB7; } while(0)
#define IO_ShiftButton_GetValue()           PORTBbits.RB7
#define IO_ShiftButton_SetDigitalInput()    do { TRISBbits.TRISB7 = 1; } while(0)
#define IO_ShiftButton_SetDigitalOutput()   do { TRISBbits.TRISB7 = 0; } while(0)
#define IO_ShiftButton_SetPullup()          do { WPUBbits.WPUB7 = 1; } while(0)
#define IO_ShiftButton_ResetPullup()        do { WPUBbits.WPUB7 = 0; } while(0)
#define IO_ShiftButton_SetPushPull()        do { ODCONBbits.ODCB7 = 0; } while(0)
#define IO_ShiftButton_SetOpenDrain()       do { ODCONBbits.ODCB7 = 1; } while(0)
#define IO_ShiftButton_SetAnalogMode()      do { ANSELBbits.ANSB7 = 1; } while(0)
#define IO_ShiftButton_SetDigitalMode()     do { ANSELBbits.ANSB7 = 0; } while(0)

// get/set AN_KEY7 aliases
#define AN_KEY7_TRIS                 TRISCbits.TRISC0
#define AN_KEY7_LAT                  LATCbits.LATC0
#define AN_KEY7_PORT                 PORTCbits.RC0
#define AN_KEY7_WPU                  WPUCbits.WPUC0
#define AN_KEY7_OD                   ODCONCbits.ODCC0
#define AN_KEY7_ANS                  ANSELCbits.ANSC0
#define AN_KEY7_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define AN_KEY7_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define AN_KEY7_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define AN_KEY7_GetValue()           PORTCbits.RC0
#define AN_KEY7_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define AN_KEY7_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define AN_KEY7_SetPullup()          do { WPUCbits.WPUC0 = 1; } while(0)
#define AN_KEY7_ResetPullup()        do { WPUCbits.WPUC0 = 0; } while(0)
#define AN_KEY7_SetPushPull()        do { ODCONCbits.ODCC0 = 0; } while(0)
#define AN_KEY7_SetOpenDrain()       do { ODCONCbits.ODCC0 = 1; } while(0)
#define AN_KEY7_SetAnalogMode()      do { ANSELCbits.ANSC0 = 1; } while(0)
#define AN_KEY7_SetDigitalMode()     do { ANSELCbits.ANSC0 = 0; } while(0)

// get/set AN_KEY8 aliases
#define AN_KEY8_TRIS                 TRISCbits.TRISC1
#define AN_KEY8_LAT                  LATCbits.LATC1
#define AN_KEY8_PORT                 PORTCbits.RC1
#define AN_KEY8_WPU                  WPUCbits.WPUC1
#define AN_KEY8_OD                   ODCONCbits.ODCC1
#define AN_KEY8_ANS                  ANSELCbits.ANSC1
#define AN_KEY8_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define AN_KEY8_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define AN_KEY8_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define AN_KEY8_GetValue()           PORTCbits.RC1
#define AN_KEY8_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define AN_KEY8_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define AN_KEY8_SetPullup()          do { WPUCbits.WPUC1 = 1; } while(0)
#define AN_KEY8_ResetPullup()        do { WPUCbits.WPUC1 = 0; } while(0)
#define AN_KEY8_SetPushPull()        do { ODCONCbits.ODCC1 = 0; } while(0)
#define AN_KEY8_SetOpenDrain()       do { ODCONCbits.ODCC1 = 1; } while(0)
#define AN_KEY8_SetAnalogMode()      do { ANSELCbits.ANSC1 = 1; } while(0)
#define AN_KEY8_SetDigitalMode()     do { ANSELCbits.ANSC1 = 0; } while(0)

// get/set AN_KEY9 aliases
#define AN_KEY9_TRIS                 TRISCbits.TRISC2
#define AN_KEY9_LAT                  LATCbits.LATC2
#define AN_KEY9_PORT                 PORTCbits.RC2
#define AN_KEY9_WPU                  WPUCbits.WPUC2
#define AN_KEY9_OD                   ODCONCbits.ODCC2
#define AN_KEY9_ANS                  ANSELCbits.ANSC2
#define AN_KEY9_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define AN_KEY9_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define AN_KEY9_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define AN_KEY9_GetValue()           PORTCbits.RC2
#define AN_KEY9_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define AN_KEY9_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define AN_KEY9_SetPullup()          do { WPUCbits.WPUC2 = 1; } while(0)
#define AN_KEY9_ResetPullup()        do { WPUCbits.WPUC2 = 0; } while(0)
#define AN_KEY9_SetPushPull()        do { ODCONCbits.ODCC2 = 0; } while(0)
#define AN_KEY9_SetOpenDrain()       do { ODCONCbits.ODCC2 = 1; } while(0)
#define AN_KEY9_SetAnalogMode()      do { ANSELCbits.ANSC2 = 1; } while(0)
#define AN_KEY9_SetDigitalMode()     do { ANSELCbits.ANSC2 = 0; } while(0)

// get/set AN_KEY10 aliases
#define AN_KEY10_TRIS                 TRISCbits.TRISC3
#define AN_KEY10_LAT                  LATCbits.LATC3
#define AN_KEY10_PORT                 PORTCbits.RC3
#define AN_KEY10_WPU                  WPUCbits.WPUC3
#define AN_KEY10_OD                   ODCONCbits.ODCC3
#define AN_KEY10_ANS                  ANSELCbits.ANSC3
#define AN_KEY10_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define AN_KEY10_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define AN_KEY10_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define AN_KEY10_GetValue()           PORTCbits.RC3
#define AN_KEY10_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define AN_KEY10_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define AN_KEY10_SetPullup()          do { WPUCbits.WPUC3 = 1; } while(0)
#define AN_KEY10_ResetPullup()        do { WPUCbits.WPUC3 = 0; } while(0)
#define AN_KEY10_SetPushPull()        do { ODCONCbits.ODCC3 = 0; } while(0)
#define AN_KEY10_SetOpenDrain()       do { ODCONCbits.ODCC3 = 1; } while(0)
#define AN_KEY10_SetAnalogMode()      do { ANSELCbits.ANSC3 = 1; } while(0)
#define AN_KEY10_SetDigitalMode()     do { ANSELCbits.ANSC3 = 0; } while(0)

// get/set AN_KEY11 aliases
#define AN_KEY11_TRIS                 TRISCbits.TRISC4
#define AN_KEY11_LAT                  LATCbits.LATC4
#define AN_KEY11_PORT                 PORTCbits.RC4
#define AN_KEY11_WPU                  WPUCbits.WPUC4
#define AN_KEY11_OD                   ODCONCbits.ODCC4
#define AN_KEY11_ANS                  ANSELCbits.ANSC4
#define AN_KEY11_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define AN_KEY11_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define AN_KEY11_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define AN_KEY11_GetValue()           PORTCbits.RC4
#define AN_KEY11_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define AN_KEY11_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define AN_KEY11_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define AN_KEY11_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)
#define AN_KEY11_SetPushPull()        do { ODCONCbits.ODCC4 = 0; } while(0)
#define AN_KEY11_SetOpenDrain()       do { ODCONCbits.ODCC4 = 1; } while(0)
#define AN_KEY11_SetAnalogMode()      do { ANSELCbits.ANSC4 = 1; } while(0)
#define AN_KEY11_SetDigitalMode()     do { ANSELCbits.ANSC4 = 0; } while(0)

// get/set RC5 procedures
#define RC5_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define RC5_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define RC5_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define RC5_GetValue()              PORTCbits.RC5
#define RC5_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define RC5_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define RC5_SetPullup()             do { WPUCbits.WPUC5 = 1; } while(0)
#define RC5_ResetPullup()           do { WPUCbits.WPUC5 = 0; } while(0)
#define RC5_SetAnalogMode()         do { ANSELCbits.ANSC5 = 1; } while(0)
#define RC5_SetDigitalMode()        do { ANSELCbits.ANSC5 = 0; } while(0)

// get/set IO_DE aliases
#define IO_DE_TRIS                 TRISCbits.TRISC6
#define IO_DE_LAT                  LATCbits.LATC6
#define IO_DE_PORT                 PORTCbits.RC6
#define IO_DE_WPU                  WPUCbits.WPUC6
#define IO_DE_OD                   ODCONCbits.ODCC6
#define IO_DE_ANS                  ANSELCbits.ANSC6
#define IO_DE_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define IO_DE_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define IO_DE_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define IO_DE_GetValue()           PORTCbits.RC6
#define IO_DE_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define IO_DE_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define IO_DE_SetPullup()          do { WPUCbits.WPUC6 = 1; } while(0)
#define IO_DE_ResetPullup()        do { WPUCbits.WPUC6 = 0; } while(0)
#define IO_DE_SetPushPull()        do { ODCONCbits.ODCC6 = 0; } while(0)
#define IO_DE_SetOpenDrain()       do { ODCONCbits.ODCC6 = 1; } while(0)
#define IO_DE_SetAnalogMode()      do { ANSELCbits.ANSC6 = 1; } while(0)
#define IO_DE_SetDigitalMode()     do { ANSELCbits.ANSC6 = 0; } while(0)

// get/set RC7 procedures
#define RC7_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define RC7_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define RC7_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define RC7_GetValue()              PORTCbits.RC7
#define RC7_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define RC7_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define RC7_SetPullup()             do { WPUCbits.WPUC7 = 1; } while(0)
#define RC7_ResetPullup()           do { WPUCbits.WPUC7 = 0; } while(0)
#define RC7_SetAnalogMode()         do { ANSELCbits.ANSC7 = 1; } while(0)
#define RC7_SetDigitalMode()        do { ANSELCbits.ANSC7 = 0; } while(0)

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