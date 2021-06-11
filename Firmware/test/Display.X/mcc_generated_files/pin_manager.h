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
        Device            :  PIC16F18857
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

// get/set LED_K1 aliases
#define LED_K1_TRIS                 TRISAbits.TRISA0
#define LED_K1_LAT                  LATAbits.LATA0
#define LED_K1_PORT                 PORTAbits.RA0
#define LED_K1_WPU                  WPUAbits.WPUA0
#define LED_K1_OD                   ODCONAbits.ODCA0
#define LED_K1_ANS                  ANSELAbits.ANSA0
#define LED_K1_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define LED_K1_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define LED_K1_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define LED_K1_GetValue()           PORTAbits.RA0
#define LED_K1_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define LED_K1_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define LED_K1_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define LED_K1_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define LED_K1_SetPushPull()        do { ODCONAbits.ODCA0 = 0; } while(0)
#define LED_K1_SetOpenDrain()       do { ODCONAbits.ODCA0 = 1; } while(0)
#define LED_K1_SetAnalogMode()      do { ANSELAbits.ANSA0 = 1; } while(0)
#define LED_K1_SetDigitalMode()     do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set LED_K2 aliases
#define LED_K2_TRIS                 TRISAbits.TRISA1
#define LED_K2_LAT                  LATAbits.LATA1
#define LED_K2_PORT                 PORTAbits.RA1
#define LED_K2_WPU                  WPUAbits.WPUA1
#define LED_K2_OD                   ODCONAbits.ODCA1
#define LED_K2_ANS                  ANSELAbits.ANSA1
#define LED_K2_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define LED_K2_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define LED_K2_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define LED_K2_GetValue()           PORTAbits.RA1
#define LED_K2_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define LED_K2_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define LED_K2_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define LED_K2_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define LED_K2_SetPushPull()        do { ODCONAbits.ODCA1 = 0; } while(0)
#define LED_K2_SetOpenDrain()       do { ODCONAbits.ODCA1 = 1; } while(0)
#define LED_K2_SetAnalogMode()      do { ANSELAbits.ANSA1 = 1; } while(0)
#define LED_K2_SetDigitalMode()     do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set LED_K3 aliases
#define LED_K3_TRIS                 TRISAbits.TRISA2
#define LED_K3_LAT                  LATAbits.LATA2
#define LED_K3_PORT                 PORTAbits.RA2
#define LED_K3_WPU                  WPUAbits.WPUA2
#define LED_K3_OD                   ODCONAbits.ODCA2
#define LED_K3_ANS                  ANSELAbits.ANSA2
#define LED_K3_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define LED_K3_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define LED_K3_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define LED_K3_GetValue()           PORTAbits.RA2
#define LED_K3_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define LED_K3_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define LED_K3_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define LED_K3_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define LED_K3_SetPushPull()        do { ODCONAbits.ODCA2 = 0; } while(0)
#define LED_K3_SetOpenDrain()       do { ODCONAbits.ODCA2 = 1; } while(0)
#define LED_K3_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define LED_K3_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set LED_K4 aliases
#define LED_K4_TRIS                 TRISAbits.TRISA3
#define LED_K4_LAT                  LATAbits.LATA3
#define LED_K4_PORT                 PORTAbits.RA3
#define LED_K4_WPU                  WPUAbits.WPUA3
#define LED_K4_OD                   ODCONAbits.ODCA3
#define LED_K4_ANS                  ANSELAbits.ANSA3
#define LED_K4_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define LED_K4_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define LED_K4_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define LED_K4_GetValue()           PORTAbits.RA3
#define LED_K4_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define LED_K4_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define LED_K4_SetPullup()          do { WPUAbits.WPUA3 = 1; } while(0)
#define LED_K4_ResetPullup()        do { WPUAbits.WPUA3 = 0; } while(0)
#define LED_K4_SetPushPull()        do { ODCONAbits.ODCA3 = 0; } while(0)
#define LED_K4_SetOpenDrain()       do { ODCONAbits.ODCA3 = 1; } while(0)
#define LED_K4_SetAnalogMode()      do { ANSELAbits.ANSA3 = 1; } while(0)
#define LED_K4_SetDigitalMode()     do { ANSELAbits.ANSA3 = 0; } while(0)

// get/set LED_K5 aliases
#define LED_K5_TRIS                 TRISAbits.TRISA4
#define LED_K5_LAT                  LATAbits.LATA4
#define LED_K5_PORT                 PORTAbits.RA4
#define LED_K5_WPU                  WPUAbits.WPUA4
#define LED_K5_OD                   ODCONAbits.ODCA4
#define LED_K5_ANS                  ANSELAbits.ANSA4
#define LED_K5_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define LED_K5_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define LED_K5_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define LED_K5_GetValue()           PORTAbits.RA4
#define LED_K5_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define LED_K5_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define LED_K5_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define LED_K5_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define LED_K5_SetPushPull()        do { ODCONAbits.ODCA4 = 0; } while(0)
#define LED_K5_SetOpenDrain()       do { ODCONAbits.ODCA4 = 1; } while(0)
#define LED_K5_SetAnalogMode()      do { ANSELAbits.ANSA4 = 1; } while(0)
#define LED_K5_SetDigitalMode()     do { ANSELAbits.ANSA4 = 0; } while(0)

// get/set LED_K6 aliases
#define LED_K6_TRIS                 TRISAbits.TRISA5
#define LED_K6_LAT                  LATAbits.LATA5
#define LED_K6_PORT                 PORTAbits.RA5
#define LED_K6_WPU                  WPUAbits.WPUA5
#define LED_K6_OD                   ODCONAbits.ODCA5
#define LED_K6_ANS                  ANSELAbits.ANSA5
#define LED_K6_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define LED_K6_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define LED_K6_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define LED_K6_GetValue()           PORTAbits.RA5
#define LED_K6_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define LED_K6_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define LED_K6_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define LED_K6_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define LED_K6_SetPushPull()        do { ODCONAbits.ODCA5 = 0; } while(0)
#define LED_K6_SetOpenDrain()       do { ODCONAbits.ODCA5 = 1; } while(0)
#define LED_K6_SetAnalogMode()      do { ANSELAbits.ANSA5 = 1; } while(0)
#define LED_K6_SetDigitalMode()     do { ANSELAbits.ANSA5 = 0; } while(0)

// get/set LED_K0 aliases
#define LED_K0_TRIS                 TRISAbits.TRISA6
#define LED_K0_LAT                  LATAbits.LATA6
#define LED_K0_PORT                 PORTAbits.RA6
#define LED_K0_WPU                  WPUAbits.WPUA6
#define LED_K0_OD                   ODCONAbits.ODCA6
#define LED_K0_ANS                  ANSELAbits.ANSA6
#define LED_K0_SetHigh()            do { LATAbits.LATA6 = 1; } while(0)
#define LED_K0_SetLow()             do { LATAbits.LATA6 = 0; } while(0)
#define LED_K0_Toggle()             do { LATAbits.LATA6 = ~LATAbits.LATA6; } while(0)
#define LED_K0_GetValue()           PORTAbits.RA6
#define LED_K0_SetDigitalInput()    do { TRISAbits.TRISA6 = 1; } while(0)
#define LED_K0_SetDigitalOutput()   do { TRISAbits.TRISA6 = 0; } while(0)
#define LED_K0_SetPullup()          do { WPUAbits.WPUA6 = 1; } while(0)
#define LED_K0_ResetPullup()        do { WPUAbits.WPUA6 = 0; } while(0)
#define LED_K0_SetPushPull()        do { ODCONAbits.ODCA6 = 0; } while(0)
#define LED_K0_SetOpenDrain()       do { ODCONAbits.ODCA6 = 1; } while(0)
#define LED_K0_SetAnalogMode()      do { ANSELAbits.ANSA6 = 1; } while(0)
#define LED_K0_SetDigitalMode()     do { ANSELAbits.ANSA6 = 0; } while(0)

// get/set LED_K7 aliases
#define LED_K7_TRIS                 TRISAbits.TRISA7
#define LED_K7_LAT                  LATAbits.LATA7
#define LED_K7_PORT                 PORTAbits.RA7
#define LED_K7_WPU                  WPUAbits.WPUA7
#define LED_K7_OD                   ODCONAbits.ODCA7
#define LED_K7_ANS                  ANSELAbits.ANSA7
#define LED_K7_SetHigh()            do { LATAbits.LATA7 = 1; } while(0)
#define LED_K7_SetLow()             do { LATAbits.LATA7 = 0; } while(0)
#define LED_K7_Toggle()             do { LATAbits.LATA7 = ~LATAbits.LATA7; } while(0)
#define LED_K7_GetValue()           PORTAbits.RA7
#define LED_K7_SetDigitalInput()    do { TRISAbits.TRISA7 = 1; } while(0)
#define LED_K7_SetDigitalOutput()   do { TRISAbits.TRISA7 = 0; } while(0)
#define LED_K7_SetPullup()          do { WPUAbits.WPUA7 = 1; } while(0)
#define LED_K7_ResetPullup()        do { WPUAbits.WPUA7 = 0; } while(0)
#define LED_K7_SetPushPull()        do { ODCONAbits.ODCA7 = 0; } while(0)
#define LED_K7_SetOpenDrain()       do { ODCONAbits.ODCA7 = 1; } while(0)
#define LED_K7_SetAnalogMode()      do { ANSELAbits.ANSA7 = 1; } while(0)
#define LED_K7_SetDigitalMode()     do { ANSELAbits.ANSA7 = 0; } while(0)

// get/set LED_A6 aliases
#define LED_A6_TRIS                 TRISBbits.TRISB0
#define LED_A6_LAT                  LATBbits.LATB0
#define LED_A6_PORT                 PORTBbits.RB0
#define LED_A6_WPU                  WPUBbits.WPUB0
#define LED_A6_OD                   ODCONBbits.ODCB0
#define LED_A6_ANS                  ANSELBbits.ANSB0
#define LED_A6_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define LED_A6_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define LED_A6_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define LED_A6_GetValue()           PORTBbits.RB0
#define LED_A6_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define LED_A6_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define LED_A6_SetPullup()          do { WPUBbits.WPUB0 = 1; } while(0)
#define LED_A6_ResetPullup()        do { WPUBbits.WPUB0 = 0; } while(0)
#define LED_A6_SetPushPull()        do { ODCONBbits.ODCB0 = 0; } while(0)
#define LED_A6_SetOpenDrain()       do { ODCONBbits.ODCB0 = 1; } while(0)
#define LED_A6_SetAnalogMode()      do { ANSELBbits.ANSB0 = 1; } while(0)
#define LED_A6_SetDigitalMode()     do { ANSELBbits.ANSB0 = 0; } while(0)

// get/set LED_A5 aliases
#define LED_A5_TRIS                 TRISBbits.TRISB1
#define LED_A5_LAT                  LATBbits.LATB1
#define LED_A5_PORT                 PORTBbits.RB1
#define LED_A5_WPU                  WPUBbits.WPUB1
#define LED_A5_OD                   ODCONBbits.ODCB1
#define LED_A5_ANS                  ANSELBbits.ANSB1
#define LED_A5_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define LED_A5_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define LED_A5_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define LED_A5_GetValue()           PORTBbits.RB1
#define LED_A5_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define LED_A5_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define LED_A5_SetPullup()          do { WPUBbits.WPUB1 = 1; } while(0)
#define LED_A5_ResetPullup()        do { WPUBbits.WPUB1 = 0; } while(0)
#define LED_A5_SetPushPull()        do { ODCONBbits.ODCB1 = 0; } while(0)
#define LED_A5_SetOpenDrain()       do { ODCONBbits.ODCB1 = 1; } while(0)
#define LED_A5_SetAnalogMode()      do { ANSELBbits.ANSB1 = 1; } while(0)
#define LED_A5_SetDigitalMode()     do { ANSELBbits.ANSB1 = 0; } while(0)

// get/set LED_A4 aliases
#define LED_A4_TRIS                 TRISBbits.TRISB2
#define LED_A4_LAT                  LATBbits.LATB2
#define LED_A4_PORT                 PORTBbits.RB2
#define LED_A4_WPU                  WPUBbits.WPUB2
#define LED_A4_OD                   ODCONBbits.ODCB2
#define LED_A4_ANS                  ANSELBbits.ANSB2
#define LED_A4_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define LED_A4_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define LED_A4_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define LED_A4_GetValue()           PORTBbits.RB2
#define LED_A4_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define LED_A4_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define LED_A4_SetPullup()          do { WPUBbits.WPUB2 = 1; } while(0)
#define LED_A4_ResetPullup()        do { WPUBbits.WPUB2 = 0; } while(0)
#define LED_A4_SetPushPull()        do { ODCONBbits.ODCB2 = 0; } while(0)
#define LED_A4_SetOpenDrain()       do { ODCONBbits.ODCB2 = 1; } while(0)
#define LED_A4_SetAnalogMode()      do { ANSELBbits.ANSB2 = 1; } while(0)
#define LED_A4_SetDigitalMode()     do { ANSELBbits.ANSB2 = 0; } while(0)

// get/set LED_A3 aliases
#define LED_A3_TRIS                 TRISBbits.TRISB3
#define LED_A3_LAT                  LATBbits.LATB3
#define LED_A3_PORT                 PORTBbits.RB3
#define LED_A3_WPU                  WPUBbits.WPUB3
#define LED_A3_OD                   ODCONBbits.ODCB3
#define LED_A3_ANS                  ANSELBbits.ANSB3
#define LED_A3_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define LED_A3_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define LED_A3_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define LED_A3_GetValue()           PORTBbits.RB3
#define LED_A3_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define LED_A3_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define LED_A3_SetPullup()          do { WPUBbits.WPUB3 = 1; } while(0)
#define LED_A3_ResetPullup()        do { WPUBbits.WPUB3 = 0; } while(0)
#define LED_A3_SetPushPull()        do { ODCONBbits.ODCB3 = 0; } while(0)
#define LED_A3_SetOpenDrain()       do { ODCONBbits.ODCB3 = 1; } while(0)
#define LED_A3_SetAnalogMode()      do { ANSELBbits.ANSB3 = 1; } while(0)
#define LED_A3_SetDigitalMode()     do { ANSELBbits.ANSB3 = 0; } while(0)

// get/set LED_A2 aliases
#define LED_A2_TRIS                 TRISBbits.TRISB4
#define LED_A2_LAT                  LATBbits.LATB4
#define LED_A2_PORT                 PORTBbits.RB4
#define LED_A2_WPU                  WPUBbits.WPUB4
#define LED_A2_OD                   ODCONBbits.ODCB4
#define LED_A2_ANS                  ANSELBbits.ANSB4
#define LED_A2_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define LED_A2_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define LED_A2_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define LED_A2_GetValue()           PORTBbits.RB4
#define LED_A2_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define LED_A2_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define LED_A2_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define LED_A2_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define LED_A2_SetPushPull()        do { ODCONBbits.ODCB4 = 0; } while(0)
#define LED_A2_SetOpenDrain()       do { ODCONBbits.ODCB4 = 1; } while(0)
#define LED_A2_SetAnalogMode()      do { ANSELBbits.ANSB4 = 1; } while(0)
#define LED_A2_SetDigitalMode()     do { ANSELBbits.ANSB4 = 0; } while(0)

// get/set LED_A1 aliases
#define LED_A1_TRIS                 TRISBbits.TRISB5
#define LED_A1_LAT                  LATBbits.LATB5
#define LED_A1_PORT                 PORTBbits.RB5
#define LED_A1_WPU                  WPUBbits.WPUB5
#define LED_A1_OD                   ODCONBbits.ODCB5
#define LED_A1_ANS                  ANSELBbits.ANSB5
#define LED_A1_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define LED_A1_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define LED_A1_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define LED_A1_GetValue()           PORTBbits.RB5
#define LED_A1_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define LED_A1_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define LED_A1_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define LED_A1_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define LED_A1_SetPushPull()        do { ODCONBbits.ODCB5 = 0; } while(0)
#define LED_A1_SetOpenDrain()       do { ODCONBbits.ODCB5 = 1; } while(0)
#define LED_A1_SetAnalogMode()      do { ANSELBbits.ANSB5 = 1; } while(0)
#define LED_A1_SetDigitalMode()     do { ANSELBbits.ANSB5 = 0; } while(0)

// get/set RC3 procedures
#define RC3_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define RC3_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define RC3_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define RC3_GetValue()              PORTCbits.RC3
#define RC3_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define RC3_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define RC3_SetPullup()             do { WPUCbits.WPUC3 = 1; } while(0)
#define RC3_ResetPullup()           do { WPUCbits.WPUC3 = 0; } while(0)
#define RC3_SetAnalogMode()         do { ANSELCbits.ANSC3 = 1; } while(0)
#define RC3_SetDigitalMode()        do { ANSELCbits.ANSC3 = 0; } while(0)

// get/set RC4 procedures
#define RC4_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define RC4_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define RC4_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define RC4_GetValue()              PORTCbits.RC4
#define RC4_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define RC4_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define RC4_SetPullup()             do { WPUCbits.WPUC4 = 1; } while(0)
#define RC4_ResetPullup()           do { WPUCbits.WPUC4 = 0; } while(0)
#define RC4_SetAnalogMode()         do { ANSELCbits.ANSC4 = 1; } while(0)
#define RC4_SetDigitalMode()        do { ANSELCbits.ANSC4 = 0; } while(0)

// get/set LED_A0 aliases
#define LED_A0_TRIS                 TRISCbits.TRISC6
#define LED_A0_LAT                  LATCbits.LATC6
#define LED_A0_PORT                 PORTCbits.RC6
#define LED_A0_WPU                  WPUCbits.WPUC6
#define LED_A0_OD                   ODCONCbits.ODCC6
#define LED_A0_ANS                  ANSELCbits.ANSC6
#define LED_A0_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define LED_A0_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define LED_A0_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define LED_A0_GetValue()           PORTCbits.RC6
#define LED_A0_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define LED_A0_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define LED_A0_SetPullup()          do { WPUCbits.WPUC6 = 1; } while(0)
#define LED_A0_ResetPullup()        do { WPUCbits.WPUC6 = 0; } while(0)
#define LED_A0_SetPushPull()        do { ODCONCbits.ODCC6 = 0; } while(0)
#define LED_A0_SetOpenDrain()       do { ODCONCbits.ODCC6 = 1; } while(0)
#define LED_A0_SetAnalogMode()      do { ANSELCbits.ANSC6 = 1; } while(0)
#define LED_A0_SetDigitalMode()     do { ANSELCbits.ANSC6 = 0; } while(0)

// get/set LED_A7 aliases
#define LED_A7_TRIS                 TRISCbits.TRISC7
#define LED_A7_LAT                  LATCbits.LATC7
#define LED_A7_PORT                 PORTCbits.RC7
#define LED_A7_WPU                  WPUCbits.WPUC7
#define LED_A7_OD                   ODCONCbits.ODCC7
#define LED_A7_ANS                  ANSELCbits.ANSC7
#define LED_A7_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define LED_A7_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define LED_A7_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define LED_A7_GetValue()           PORTCbits.RC7
#define LED_A7_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define LED_A7_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define LED_A7_SetPullup()          do { WPUCbits.WPUC7 = 1; } while(0)
#define LED_A7_ResetPullup()        do { WPUCbits.WPUC7 = 0; } while(0)
#define LED_A7_SetPushPull()        do { ODCONCbits.ODCC7 = 0; } while(0)
#define LED_A7_SetOpenDrain()       do { ODCONCbits.ODCC7 = 1; } while(0)
#define LED_A7_SetAnalogMode()      do { ANSELCbits.ANSC7 = 1; } while(0)
#define LED_A7_SetDigitalMode()     do { ANSELCbits.ANSC7 = 0; } while(0)

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