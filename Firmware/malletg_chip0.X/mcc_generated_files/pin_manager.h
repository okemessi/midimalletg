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

// get/set IO_LEDA aliases
#define IO_LEDA_TRIS                 TRISAbits.TRISA0
#define IO_LEDA_LAT                  LATAbits.LATA0
#define IO_LEDA_PORT                 PORTAbits.RA0
#define IO_LEDA_WPU                  WPUAbits.WPUA0
#define IO_LEDA_OD                   ODCONAbits.ODCA0
#define IO_LEDA_ANS                  ANSELAbits.ANSA0
#define IO_LEDA_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define IO_LEDA_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define IO_LEDA_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define IO_LEDA_GetValue()           PORTAbits.RA0
#define IO_LEDA_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define IO_LEDA_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define IO_LEDA_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define IO_LEDA_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define IO_LEDA_SetPushPull()        do { ODCONAbits.ODCA0 = 0; } while(0)
#define IO_LEDA_SetOpenDrain()       do { ODCONAbits.ODCA0 = 1; } while(0)
#define IO_LEDA_SetAnalogMode()      do { ANSELAbits.ANSA0 = 1; } while(0)
#define IO_LEDA_SetDigitalMode()     do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set IO_LEDB aliases
#define IO_LEDB_TRIS                 TRISAbits.TRISA1
#define IO_LEDB_LAT                  LATAbits.LATA1
#define IO_LEDB_PORT                 PORTAbits.RA1
#define IO_LEDB_WPU                  WPUAbits.WPUA1
#define IO_LEDB_OD                   ODCONAbits.ODCA1
#define IO_LEDB_ANS                  ANSELAbits.ANSA1
#define IO_LEDB_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define IO_LEDB_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define IO_LEDB_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define IO_LEDB_GetValue()           PORTAbits.RA1
#define IO_LEDB_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define IO_LEDB_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define IO_LEDB_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define IO_LEDB_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define IO_LEDB_SetPushPull()        do { ODCONAbits.ODCA1 = 0; } while(0)
#define IO_LEDB_SetOpenDrain()       do { ODCONAbits.ODCA1 = 1; } while(0)
#define IO_LEDB_SetAnalogMode()      do { ANSELAbits.ANSA1 = 1; } while(0)
#define IO_LEDB_SetDigitalMode()     do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set IO_LEDC aliases
#define IO_LEDC_TRIS                 TRISAbits.TRISA2
#define IO_LEDC_LAT                  LATAbits.LATA2
#define IO_LEDC_PORT                 PORTAbits.RA2
#define IO_LEDC_WPU                  WPUAbits.WPUA2
#define IO_LEDC_OD                   ODCONAbits.ODCA2
#define IO_LEDC_ANS                  ANSELAbits.ANSA2
#define IO_LEDC_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define IO_LEDC_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define IO_LEDC_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define IO_LEDC_GetValue()           PORTAbits.RA2
#define IO_LEDC_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define IO_LEDC_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define IO_LEDC_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define IO_LEDC_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define IO_LEDC_SetPushPull()        do { ODCONAbits.ODCA2 = 0; } while(0)
#define IO_LEDC_SetOpenDrain()       do { ODCONAbits.ODCA2 = 1; } while(0)
#define IO_LEDC_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define IO_LEDC_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set IO_LEDD aliases
#define IO_LEDD_TRIS                 TRISAbits.TRISA3
#define IO_LEDD_LAT                  LATAbits.LATA3
#define IO_LEDD_PORT                 PORTAbits.RA3
#define IO_LEDD_WPU                  WPUAbits.WPUA3
#define IO_LEDD_OD                   ODCONAbits.ODCA3
#define IO_LEDD_ANS                  ANSELAbits.ANSA3
#define IO_LEDD_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define IO_LEDD_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define IO_LEDD_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define IO_LEDD_GetValue()           PORTAbits.RA3
#define IO_LEDD_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define IO_LEDD_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define IO_LEDD_SetPullup()          do { WPUAbits.WPUA3 = 1; } while(0)
#define IO_LEDD_ResetPullup()        do { WPUAbits.WPUA3 = 0; } while(0)
#define IO_LEDD_SetPushPull()        do { ODCONAbits.ODCA3 = 0; } while(0)
#define IO_LEDD_SetOpenDrain()       do { ODCONAbits.ODCA3 = 1; } while(0)
#define IO_LEDD_SetAnalogMode()      do { ANSELAbits.ANSA3 = 1; } while(0)
#define IO_LEDD_SetDigitalMode()     do { ANSELAbits.ANSA3 = 0; } while(0)

// get/set IO_LEDE aliases
#define IO_LEDE_TRIS                 TRISAbits.TRISA4
#define IO_LEDE_LAT                  LATAbits.LATA4
#define IO_LEDE_PORT                 PORTAbits.RA4
#define IO_LEDE_WPU                  WPUAbits.WPUA4
#define IO_LEDE_OD                   ODCONAbits.ODCA4
#define IO_LEDE_ANS                  ANSELAbits.ANSA4
#define IO_LEDE_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define IO_LEDE_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define IO_LEDE_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define IO_LEDE_GetValue()           PORTAbits.RA4
#define IO_LEDE_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define IO_LEDE_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define IO_LEDE_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define IO_LEDE_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define IO_LEDE_SetPushPull()        do { ODCONAbits.ODCA4 = 0; } while(0)
#define IO_LEDE_SetOpenDrain()       do { ODCONAbits.ODCA4 = 1; } while(0)
#define IO_LEDE_SetAnalogMode()      do { ANSELAbits.ANSA4 = 1; } while(0)
#define IO_LEDE_SetDigitalMode()     do { ANSELAbits.ANSA4 = 0; } while(0)

// get/set IO_LEDF aliases
#define IO_LEDF_TRIS                 TRISAbits.TRISA5
#define IO_LEDF_LAT                  LATAbits.LATA5
#define IO_LEDF_PORT                 PORTAbits.RA5
#define IO_LEDF_WPU                  WPUAbits.WPUA5
#define IO_LEDF_OD                   ODCONAbits.ODCA5
#define IO_LEDF_ANS                  ANSELAbits.ANSA5
#define IO_LEDF_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define IO_LEDF_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define IO_LEDF_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define IO_LEDF_GetValue()           PORTAbits.RA5
#define IO_LEDF_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define IO_LEDF_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define IO_LEDF_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define IO_LEDF_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define IO_LEDF_SetPushPull()        do { ODCONAbits.ODCA5 = 0; } while(0)
#define IO_LEDF_SetOpenDrain()       do { ODCONAbits.ODCA5 = 1; } while(0)
#define IO_LEDF_SetAnalogMode()      do { ANSELAbits.ANSA5 = 1; } while(0)
#define IO_LEDF_SetDigitalMode()     do { ANSELAbits.ANSA5 = 0; } while(0)

// get/set IO_LEDG aliases
#define IO_LEDG_TRIS                 TRISAbits.TRISA6
#define IO_LEDG_LAT                  LATAbits.LATA6
#define IO_LEDG_PORT                 PORTAbits.RA6
#define IO_LEDG_WPU                  WPUAbits.WPUA6
#define IO_LEDG_OD                   ODCONAbits.ODCA6
#define IO_LEDG_ANS                  ANSELAbits.ANSA6
#define IO_LEDG_SetHigh()            do { LATAbits.LATA6 = 1; } while(0)
#define IO_LEDG_SetLow()             do { LATAbits.LATA6 = 0; } while(0)
#define IO_LEDG_Toggle()             do { LATAbits.LATA6 = ~LATAbits.LATA6; } while(0)
#define IO_LEDG_GetValue()           PORTAbits.RA6
#define IO_LEDG_SetDigitalInput()    do { TRISAbits.TRISA6 = 1; } while(0)
#define IO_LEDG_SetDigitalOutput()   do { TRISAbits.TRISA6 = 0; } while(0)
#define IO_LEDG_SetPullup()          do { WPUAbits.WPUA6 = 1; } while(0)
#define IO_LEDG_ResetPullup()        do { WPUAbits.WPUA6 = 0; } while(0)
#define IO_LEDG_SetPushPull()        do { ODCONAbits.ODCA6 = 0; } while(0)
#define IO_LEDG_SetOpenDrain()       do { ODCONAbits.ODCA6 = 1; } while(0)
#define IO_LEDG_SetAnalogMode()      do { ANSELAbits.ANSA6 = 1; } while(0)
#define IO_LEDG_SetDigitalMode()     do { ANSELAbits.ANSA6 = 0; } while(0)

// get/set IO_RA7 aliases
#define IO_RA7_TRIS                 TRISAbits.TRISA7
#define IO_RA7_LAT                  LATAbits.LATA7
#define IO_RA7_PORT                 PORTAbits.RA7
#define IO_RA7_WPU                  WPUAbits.WPUA7
#define IO_RA7_OD                   ODCONAbits.ODCA7
#define IO_RA7_ANS                  ANSELAbits.ANSA7
#define IO_RA7_SetHigh()            do { LATAbits.LATA7 = 1; } while(0)
#define IO_RA7_SetLow()             do { LATAbits.LATA7 = 0; } while(0)
#define IO_RA7_Toggle()             do { LATAbits.LATA7 = ~LATAbits.LATA7; } while(0)
#define IO_RA7_GetValue()           PORTAbits.RA7
#define IO_RA7_SetDigitalInput()    do { TRISAbits.TRISA7 = 1; } while(0)
#define IO_RA7_SetDigitalOutput()   do { TRISAbits.TRISA7 = 0; } while(0)
#define IO_RA7_SetPullup()          do { WPUAbits.WPUA7 = 1; } while(0)
#define IO_RA7_ResetPullup()        do { WPUAbits.WPUA7 = 0; } while(0)
#define IO_RA7_SetPushPull()        do { ODCONAbits.ODCA7 = 0; } while(0)
#define IO_RA7_SetOpenDrain()       do { ODCONAbits.ODCA7 = 1; } while(0)
#define IO_RA7_SetAnalogMode()      do { ANSELAbits.ANSA7 = 1; } while(0)
#define IO_RA7_SetDigitalMode()     do { ANSELAbits.ANSA7 = 0; } while(0)

// get/set IO_RB0 aliases
#define IO_RB0_TRIS                 TRISBbits.TRISB0
#define IO_RB0_LAT                  LATBbits.LATB0
#define IO_RB0_PORT                 PORTBbits.RB0
#define IO_RB0_WPU                  WPUBbits.WPUB0
#define IO_RB0_OD                   ODCONBbits.ODCB0
#define IO_RB0_ANS                  ANSELBbits.ANSB0
#define IO_RB0_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define IO_RB0_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define IO_RB0_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define IO_RB0_GetValue()           PORTBbits.RB0
#define IO_RB0_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define IO_RB0_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define IO_RB0_SetPullup()          do { WPUBbits.WPUB0 = 1; } while(0)
#define IO_RB0_ResetPullup()        do { WPUBbits.WPUB0 = 0; } while(0)
#define IO_RB0_SetPushPull()        do { ODCONBbits.ODCB0 = 0; } while(0)
#define IO_RB0_SetOpenDrain()       do { ODCONBbits.ODCB0 = 1; } while(0)
#define IO_RB0_SetAnalogMode()      do { ANSELBbits.ANSB0 = 1; } while(0)
#define IO_RB0_SetDigitalMode()     do { ANSELBbits.ANSB0 = 0; } while(0)

// get/set IO_RB1 aliases
#define IO_RB1_TRIS                 TRISBbits.TRISB1
#define IO_RB1_LAT                  LATBbits.LATB1
#define IO_RB1_PORT                 PORTBbits.RB1
#define IO_RB1_WPU                  WPUBbits.WPUB1
#define IO_RB1_OD                   ODCONBbits.ODCB1
#define IO_RB1_ANS                  ANSELBbits.ANSB1
#define IO_RB1_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define IO_RB1_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define IO_RB1_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define IO_RB1_GetValue()           PORTBbits.RB1
#define IO_RB1_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define IO_RB1_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define IO_RB1_SetPullup()          do { WPUBbits.WPUB1 = 1; } while(0)
#define IO_RB1_ResetPullup()        do { WPUBbits.WPUB1 = 0; } while(0)
#define IO_RB1_SetPushPull()        do { ODCONBbits.ODCB1 = 0; } while(0)
#define IO_RB1_SetOpenDrain()       do { ODCONBbits.ODCB1 = 1; } while(0)
#define IO_RB1_SetAnalogMode()      do { ANSELBbits.ANSB1 = 1; } while(0)
#define IO_RB1_SetDigitalMode()     do { ANSELBbits.ANSB1 = 0; } while(0)

// get/set IO_RB2 aliases
#define IO_RB2_TRIS                 TRISBbits.TRISB2
#define IO_RB2_LAT                  LATBbits.LATB2
#define IO_RB2_PORT                 PORTBbits.RB2
#define IO_RB2_WPU                  WPUBbits.WPUB2
#define IO_RB2_OD                   ODCONBbits.ODCB2
#define IO_RB2_ANS                  ANSELBbits.ANSB2
#define IO_RB2_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define IO_RB2_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define IO_RB2_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define IO_RB2_GetValue()           PORTBbits.RB2
#define IO_RB2_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define IO_RB2_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define IO_RB2_SetPullup()          do { WPUBbits.WPUB2 = 1; } while(0)
#define IO_RB2_ResetPullup()        do { WPUBbits.WPUB2 = 0; } while(0)
#define IO_RB2_SetPushPull()        do { ODCONBbits.ODCB2 = 0; } while(0)
#define IO_RB2_SetOpenDrain()       do { ODCONBbits.ODCB2 = 1; } while(0)
#define IO_RB2_SetAnalogMode()      do { ANSELBbits.ANSB2 = 1; } while(0)
#define IO_RB2_SetDigitalMode()     do { ANSELBbits.ANSB2 = 0; } while(0)

// get/set IO_RB3 aliases
#define IO_RB3_TRIS                 TRISBbits.TRISB3
#define IO_RB3_LAT                  LATBbits.LATB3
#define IO_RB3_PORT                 PORTBbits.RB3
#define IO_RB3_WPU                  WPUBbits.WPUB3
#define IO_RB3_OD                   ODCONBbits.ODCB3
#define IO_RB3_ANS                  ANSELBbits.ANSB3
#define IO_RB3_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define IO_RB3_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define IO_RB3_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define IO_RB3_GetValue()           PORTBbits.RB3
#define IO_RB3_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define IO_RB3_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define IO_RB3_SetPullup()          do { WPUBbits.WPUB3 = 1; } while(0)
#define IO_RB3_ResetPullup()        do { WPUBbits.WPUB3 = 0; } while(0)
#define IO_RB3_SetPushPull()        do { ODCONBbits.ODCB3 = 0; } while(0)
#define IO_RB3_SetOpenDrain()       do { ODCONBbits.ODCB3 = 1; } while(0)
#define IO_RB3_SetAnalogMode()      do { ANSELBbits.ANSB3 = 1; } while(0)
#define IO_RB3_SetDigitalMode()     do { ANSELBbits.ANSB3 = 0; } while(0)

// get/set IO_RB4 aliases
#define IO_RB4_TRIS                 TRISBbits.TRISB4
#define IO_RB4_LAT                  LATBbits.LATB4
#define IO_RB4_PORT                 PORTBbits.RB4
#define IO_RB4_WPU                  WPUBbits.WPUB4
#define IO_RB4_OD                   ODCONBbits.ODCB4
#define IO_RB4_ANS                  ANSELBbits.ANSB4
#define IO_RB4_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define IO_RB4_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define IO_RB4_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define IO_RB4_GetValue()           PORTBbits.RB4
#define IO_RB4_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define IO_RB4_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define IO_RB4_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define IO_RB4_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define IO_RB4_SetPushPull()        do { ODCONBbits.ODCB4 = 0; } while(0)
#define IO_RB4_SetOpenDrain()       do { ODCONBbits.ODCB4 = 1; } while(0)
#define IO_RB4_SetAnalogMode()      do { ANSELBbits.ANSB4 = 1; } while(0)
#define IO_RB4_SetDigitalMode()     do { ANSELBbits.ANSB4 = 0; } while(0)

// get/set IO_RB5 aliases
#define IO_RB5_TRIS                 TRISBbits.TRISB5
#define IO_RB5_LAT                  LATBbits.LATB5
#define IO_RB5_PORT                 PORTBbits.RB5
#define IO_RB5_WPU                  WPUBbits.WPUB5
#define IO_RB5_OD                   ODCONBbits.ODCB5
#define IO_RB5_ANS                  ANSELBbits.ANSB5
#define IO_RB5_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define IO_RB5_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define IO_RB5_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define IO_RB5_GetValue()           PORTBbits.RB5
#define IO_RB5_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define IO_RB5_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define IO_RB5_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define IO_RB5_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define IO_RB5_SetPushPull()        do { ODCONBbits.ODCB5 = 0; } while(0)
#define IO_RB5_SetOpenDrain()       do { ODCONBbits.ODCB5 = 1; } while(0)
#define IO_RB5_SetAnalogMode()      do { ANSELBbits.ANSB5 = 1; } while(0)
#define IO_RB5_SetDigitalMode()     do { ANSELBbits.ANSB5 = 0; } while(0)

// get/set IO_RB6 aliases
#define IO_RB6_TRIS                 TRISBbits.TRISB6
#define IO_RB6_LAT                  LATBbits.LATB6
#define IO_RB6_PORT                 PORTBbits.RB6
#define IO_RB6_WPU                  WPUBbits.WPUB6
#define IO_RB6_OD                   ODCONBbits.ODCB6
#define IO_RB6_ANS                  ANSELBbits.ANSB6
#define IO_RB6_SetHigh()            do { LATBbits.LATB6 = 1; } while(0)
#define IO_RB6_SetLow()             do { LATBbits.LATB6 = 0; } while(0)
#define IO_RB6_Toggle()             do { LATBbits.LATB6 = ~LATBbits.LATB6; } while(0)
#define IO_RB6_GetValue()           PORTBbits.RB6
#define IO_RB6_SetDigitalInput()    do { TRISBbits.TRISB6 = 1; } while(0)
#define IO_RB6_SetDigitalOutput()   do { TRISBbits.TRISB6 = 0; } while(0)
#define IO_RB6_SetPullup()          do { WPUBbits.WPUB6 = 1; } while(0)
#define IO_RB6_ResetPullup()        do { WPUBbits.WPUB6 = 0; } while(0)
#define IO_RB6_SetPushPull()        do { ODCONBbits.ODCB6 = 0; } while(0)
#define IO_RB6_SetOpenDrain()       do { ODCONBbits.ODCB6 = 1; } while(0)
#define IO_RB6_SetAnalogMode()      do { ANSELBbits.ANSB6 = 1; } while(0)
#define IO_RB6_SetDigitalMode()     do { ANSELBbits.ANSB6 = 0; } while(0)

// get/set IO_RB7 aliases
#define IO_RB7_TRIS                 TRISBbits.TRISB7
#define IO_RB7_LAT                  LATBbits.LATB7
#define IO_RB7_PORT                 PORTBbits.RB7
#define IO_RB7_WPU                  WPUBbits.WPUB7
#define IO_RB7_OD                   ODCONBbits.ODCB7
#define IO_RB7_ANS                  ANSELBbits.ANSB7
#define IO_RB7_SetHigh()            do { LATBbits.LATB7 = 1; } while(0)
#define IO_RB7_SetLow()             do { LATBbits.LATB7 = 0; } while(0)
#define IO_RB7_Toggle()             do { LATBbits.LATB7 = ~LATBbits.LATB7; } while(0)
#define IO_RB7_GetValue()           PORTBbits.RB7
#define IO_RB7_SetDigitalInput()    do { TRISBbits.TRISB7 = 1; } while(0)
#define IO_RB7_SetDigitalOutput()   do { TRISBbits.TRISB7 = 0; } while(0)
#define IO_RB7_SetPullup()          do { WPUBbits.WPUB7 = 1; } while(0)
#define IO_RB7_ResetPullup()        do { WPUBbits.WPUB7 = 0; } while(0)
#define IO_RB7_SetPushPull()        do { ODCONBbits.ODCB7 = 0; } while(0)
#define IO_RB7_SetOpenDrain()       do { ODCONBbits.ODCB7 = 1; } while(0)
#define IO_RB7_SetAnalogMode()      do { ANSELBbits.ANSB7 = 1; } while(0)
#define IO_RB7_SetDigitalMode()     do { ANSELBbits.ANSB7 = 0; } while(0)

// get/set IO_LED1 aliases
#define IO_LED1_TRIS                 TRISCbits.TRISC0
#define IO_LED1_LAT                  LATCbits.LATC0
#define IO_LED1_PORT                 PORTCbits.RC0
#define IO_LED1_WPU                  WPUCbits.WPUC0
#define IO_LED1_OD                   ODCONCbits.ODCC0
#define IO_LED1_ANS                  ANSELCbits.ANSC0
#define IO_LED1_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define IO_LED1_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define IO_LED1_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define IO_LED1_GetValue()           PORTCbits.RC0
#define IO_LED1_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define IO_LED1_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define IO_LED1_SetPullup()          do { WPUCbits.WPUC0 = 1; } while(0)
#define IO_LED1_ResetPullup()        do { WPUCbits.WPUC0 = 0; } while(0)
#define IO_LED1_SetPushPull()        do { ODCONCbits.ODCC0 = 0; } while(0)
#define IO_LED1_SetOpenDrain()       do { ODCONCbits.ODCC0 = 1; } while(0)
#define IO_LED1_SetAnalogMode()      do { ANSELCbits.ANSC0 = 1; } while(0)
#define IO_LED1_SetDigitalMode()     do { ANSELCbits.ANSC0 = 0; } while(0)

// get/set IO_LED2 aliases
#define IO_LED2_TRIS                 TRISCbits.TRISC1
#define IO_LED2_LAT                  LATCbits.LATC1
#define IO_LED2_PORT                 PORTCbits.RC1
#define IO_LED2_WPU                  WPUCbits.WPUC1
#define IO_LED2_OD                   ODCONCbits.ODCC1
#define IO_LED2_ANS                  ANSELCbits.ANSC1
#define IO_LED2_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define IO_LED2_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define IO_LED2_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define IO_LED2_GetValue()           PORTCbits.RC1
#define IO_LED2_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define IO_LED2_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define IO_LED2_SetPullup()          do { WPUCbits.WPUC1 = 1; } while(0)
#define IO_LED2_ResetPullup()        do { WPUCbits.WPUC1 = 0; } while(0)
#define IO_LED2_SetPushPull()        do { ODCONCbits.ODCC1 = 0; } while(0)
#define IO_LED2_SetOpenDrain()       do { ODCONCbits.ODCC1 = 1; } while(0)
#define IO_LED2_SetAnalogMode()      do { ANSELCbits.ANSC1 = 1; } while(0)
#define IO_LED2_SetDigitalMode()     do { ANSELCbits.ANSC1 = 0; } while(0)

// get/set IO_LED3 aliases
#define IO_LED3_TRIS                 TRISCbits.TRISC2
#define IO_LED3_LAT                  LATCbits.LATC2
#define IO_LED3_PORT                 PORTCbits.RC2
#define IO_LED3_WPU                  WPUCbits.WPUC2
#define IO_LED3_OD                   ODCONCbits.ODCC2
#define IO_LED3_ANS                  ANSELCbits.ANSC2
#define IO_LED3_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define IO_LED3_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define IO_LED3_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define IO_LED3_GetValue()           PORTCbits.RC2
#define IO_LED3_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define IO_LED3_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define IO_LED3_SetPullup()          do { WPUCbits.WPUC2 = 1; } while(0)
#define IO_LED3_ResetPullup()        do { WPUCbits.WPUC2 = 0; } while(0)
#define IO_LED3_SetPushPull()        do { ODCONCbits.ODCC2 = 0; } while(0)
#define IO_LED3_SetOpenDrain()       do { ODCONCbits.ODCC2 = 1; } while(0)
#define IO_LED3_SetAnalogMode()      do { ANSELCbits.ANSC2 = 1; } while(0)
#define IO_LED3_SetDigitalMode()     do { ANSELCbits.ANSC2 = 0; } while(0)

// get/set IO_RC3 aliases
#define IO_RC3_TRIS                 TRISCbits.TRISC3
#define IO_RC3_LAT                  LATCbits.LATC3
#define IO_RC3_PORT                 PORTCbits.RC3
#define IO_RC3_WPU                  WPUCbits.WPUC3
#define IO_RC3_OD                   ODCONCbits.ODCC3
#define IO_RC3_ANS                  ANSELCbits.ANSC3
#define IO_RC3_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define IO_RC3_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define IO_RC3_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define IO_RC3_GetValue()           PORTCbits.RC3
#define IO_RC3_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define IO_RC3_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define IO_RC3_SetPullup()          do { WPUCbits.WPUC3 = 1; } while(0)
#define IO_RC3_ResetPullup()        do { WPUCbits.WPUC3 = 0; } while(0)
#define IO_RC3_SetPushPull()        do { ODCONCbits.ODCC3 = 0; } while(0)
#define IO_RC3_SetOpenDrain()       do { ODCONCbits.ODCC3 = 1; } while(0)
#define IO_RC3_SetAnalogMode()      do { ANSELCbits.ANSC3 = 1; } while(0)
#define IO_RC3_SetDigitalMode()     do { ANSELCbits.ANSC3 = 0; } while(0)

// get/set IO_RC4 aliases
#define IO_RC4_TRIS                 TRISCbits.TRISC4
#define IO_RC4_LAT                  LATCbits.LATC4
#define IO_RC4_PORT                 PORTCbits.RC4
#define IO_RC4_WPU                  WPUCbits.WPUC4
#define IO_RC4_OD                   ODCONCbits.ODCC4
#define IO_RC4_ANS                  ANSELCbits.ANSC4
#define IO_RC4_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define IO_RC4_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define IO_RC4_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define IO_RC4_GetValue()           PORTCbits.RC4
#define IO_RC4_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define IO_RC4_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define IO_RC4_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define IO_RC4_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)
#define IO_RC4_SetPushPull()        do { ODCONCbits.ODCC4 = 0; } while(0)
#define IO_RC4_SetOpenDrain()       do { ODCONCbits.ODCC4 = 1; } while(0)
#define IO_RC4_SetAnalogMode()      do { ANSELCbits.ANSC4 = 1; } while(0)
#define IO_RC4_SetDigitalMode()     do { ANSELCbits.ANSC4 = 0; } while(0)

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