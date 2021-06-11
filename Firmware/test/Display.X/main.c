/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.7
        Device            :  PIC16F18857
        Driver Version    :  2.00
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

#include "mcc_generated_files/mcc.h"

void TMR0_Event(void);
void TMR2_Event(void);
void printbar(signed char);
void printd1(unsigned short);
void printd2(signed char);
void printbar(signed char);
void printbank(signed char);
void printnum(unsigned char,unsigned char);

void setanode(unsigned char,bool);
void setkathode(unsigned char,bool);

bool matrix[7][7] = {0};

/*[A1-A7][K1-K7:on/off]
 *  d11A    d11B    d11C    d11D    d11E    d11F    d11G
 *  d21A    d21B    d21C    d21D    d21E    d21F    d21G
 *  d12A    d12B    d12C    d12D    d12E    d12F    d12G
 *  d22A    d22B    d22C    d22D    d22E    d22F    d22G
 *  d13A    d13B    d13C    d13D    d13E    d13F    d13G
 *  bar9    bar8    bar7    bar6    bar5    bar4    bar3
 *  bar2    bar1    bar0    bank1   bank4   bank3   bank2
 */

unsigned char current_anode = 0;

unsigned char trigger[4] = {0};

/*  d1  d2  bar bank*/

/*
                         Main application
 */
void main(void)
{
    // initialize the device
    SYSTEM_Initialize();
    TMR0_SetInterruptHandler(TMR0_Event);
    TMR2_SetInterruptHandler(TMR2_Event);
    
    // When using interrupts, you need to set the Global and Peripheral Interrupt Enable bits
    // Use the following macros to:

    // Enable the Global Interrupts
    INTERRUPT_GlobalInterruptEnable();

    // Enable the Peripheral Interrupts
    INTERRUPT_PeripheralInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();
    
    printd1(123);
    printd2(-1);
    printbar(9);
    printbank(2);

    while (1)
    {
    }
}

void TMR0_Event(void){
    unsigned char i;
    setanode(current_anode,0);
    current_anode ++;
    if(current_anode > 6) current_anode = 0;
    for(i = 0; i < 7; i++){
        setkathode(i,matrix[current_anode][i]);
    }
    setanode(current_anode,1);
}

void TMR2_Event(void){
    unsigned char i;
    setanode(current_anode,0);
    current_anode ++;
    if(current_anode > 6) current_anode = 0;
    for(i = 0; i < 7; i++){
        setkathode(i,matrix[current_anode][i]);
    }
    setanode(current_anode,1);
}

void printd1(unsigned short input){
    printnum(1,input%10);
    input = input / 10;
    if(input>0){
        printnum(3,input%10);
        input = input / 10;
        if(input>0){
            printnum(0,input%10);
        }else{
            printnum(0,11);
        }
    }else{
        printnum(3,11);
    }
    return;
}

void printd2(signed char input){
    if(input<0){
        input = -input;
        printnum(4,10);
    }else{
        printnum(4,11);
    }
    printnum(2,input%10);
    return;
}

void printbar(signed char input){
    if(input>9) matrix[5][0]=1; else matrix[5][0]=0;
    if(input>8) matrix[5][1]=1; else matrix[5][1]=0;
    if(input>7) matrix[5][2]=1; else matrix[5][2]=0;
    if(input>6) matrix[5][3]=1; else matrix[5][3]=0;
    if(input>5) matrix[5][4]=1; else matrix[5][4]=0;
    if(input>4) matrix[5][5]=1; else matrix[5][5]=0;
    if(input>3) matrix[5][6]=1; else matrix[5][6]=0;
    if(input>2) matrix[6][0]=1; else matrix[6][0]=0;
    if(input>1) matrix[6][1]=1; else matrix[6][1]=0;
    if(input>0) matrix[6][2]=1; else matrix[6][2]=0;
    return;
}
void printbank(signed char input){
    if(input==1) matrix[6][3]=1; else matrix[6][3]=0;
    if(input==2) matrix[6][6]=1; else matrix[6][6]=0;
    if(input==3) matrix[6][5]=1; else matrix[6][5]=0;
    if(input==4) matrix[6][4]=1; else matrix[6][4]=0;
    return;
}
    
void printnum(unsigned char target, unsigned char num){
    if(target>6) return;
    switch(num){
        case 0:
            matrix[target][0]=1;
            matrix[target][1]=1;
            matrix[target][2]=1;
            matrix[target][3]=1;
            matrix[target][4]=1;
            matrix[target][5]=1;
            matrix[target][6]=0;
            break;
        case 1:
            matrix[target][0]=0;
            matrix[target][1]=1;
            matrix[target][2]=1;
            matrix[target][3]=0;
            matrix[target][4]=0;
            matrix[target][5]=0;
            matrix[target][6]=0;
            break;
        case 2:
            matrix[target][0]=1;
            matrix[target][1]=1;
            matrix[target][2]=0;
            matrix[target][3]=1;
            matrix[target][4]=1;
            matrix[target][5]=0;
            matrix[target][6]=1;
            break;
        case 3:
            matrix[target][0]=1;
            matrix[target][1]=1;
            matrix[target][2]=1;
            matrix[target][3]=1;
            matrix[target][4]=0;
            matrix[target][5]=0;
            matrix[target][6]=1;
            break;
        case 4:
            matrix[target][0]=0;
            matrix[target][1]=1;
            matrix[target][2]=1;
            matrix[target][3]=0;
            matrix[target][4]=0;
            matrix[target][5]=1;
            matrix[target][6]=1;
            break;
        case 5:
            matrix[target][0]=1;
            matrix[target][1]=0;
            matrix[target][2]=1;
            matrix[target][3]=1;
            matrix[target][4]=0;
            matrix[target][5]=1;
            matrix[target][6]=1;
            break;
        case 6:
            matrix[target][0]=1;
            matrix[target][1]=0;
            matrix[target][2]=1;
            matrix[target][3]=1;
            matrix[target][4]=1;
            matrix[target][5]=1;
            matrix[target][6]=1;
            break;
        case 7:
            matrix[target][0]=1;
            matrix[target][1]=1;
            matrix[target][2]=1;
            matrix[target][3]=0;
            matrix[target][4]=0;
            matrix[target][5]=0;
            matrix[target][6]=0;
            break;
        case 8:
            matrix[target][0]=1;
            matrix[target][1]=1;
            matrix[target][2]=1;
            matrix[target][3]=1;
            matrix[target][4]=1;
            matrix[target][5]=1;
            matrix[target][6]=1;
            break;
        case 9:
            matrix[target][0]=1;
            matrix[target][1]=1;
            matrix[target][2]=1;
            matrix[target][3]=1;
            matrix[target][4]=0;
            matrix[target][5]=1;
            matrix[target][6]=1;
            break;
        case 10:
            matrix[target][0]=0;
            matrix[target][1]=0;
            matrix[target][2]=0;
            matrix[target][3]=0;
            matrix[target][4]=0;
            matrix[target][5]=0;
            matrix[target][6]=1;
            break;
        default:
            matrix[target][0]=0;
            matrix[target][1]=0;
            matrix[target][2]=0;
            matrix[target][3]=0;
            matrix[target][4]=0;
            matrix[target][5]=0;
            matrix[target][6]=0;
            break;
    }
}

void setanode(unsigned char num, bool val){
    switch(num){
        case 0:
        LED_A1_LAT = val;
        break;
        case 1:
        LED_A2_LAT = val;
        break;
        case 2:
        LED_A3_LAT = val;
        break;
        case 3:
        LED_A4_LAT = val;
        break;
        case 4:
        LED_A5_LAT = val;
        break;
        case 5:
        LED_A6_LAT = val;
        break;
        case 6:
        LED_A7_LAT = val;
        break;
    }
    return;
}
void setkathode(unsigned char num, bool val){
    switch(num){
        case 0:
        LED_K1_LAT = val;
        break;
        case 1:
        LED_K2_LAT = val;
        break;
        case 2:
        LED_K3_LAT = val;
        break;
        case 3:
        LED_K4_LAT = val;
        break;
        case 4:
        LED_K5_LAT = val;
        break;
        case 5:
        LED_K6_LAT = val;
        break;
        case 6:
        LED_K7_LAT = val;
        break;
    }
    return;    
}

/**
 End of File
*/