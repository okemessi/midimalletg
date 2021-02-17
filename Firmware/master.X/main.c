/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC32MX MCUs

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC32MX MCUs - pic32mx : v1.35
        Device            :  PIC32MX110F016B
        Driver Version    :  2.00
    The generated drivers are tested against the following:
        Compiler          :  XC32 1.42
        MPLAB             :  MPLAB X 3.55
*/

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

#include "mcc_generated_files/mcc.h"
#include "keymap.h"
#include "memorymap.h"
#define _XTAL_FREQ 30000000

void GetKeyValue(_keyvalue*);
void BufferToVelocity(_keyvalue*);
void CheckVelocity(_keyvalue*);

_memorymap pereferences;

/*
                         Main application
 */
int main(void)
{
    _keyvalue keyvalue = {0};

    // initialize the device
    SYSTEM_Initialize();
    load_memorymap(&pereferences);

    while (1)
    {
        do
        {
          GetKeyValue(keyvalue);
        } while (!TMR2_GetElapsedThenClear());

        BufferToVelocity(keyvalue);

        

        CheckVelocity(keyvalue);
    }

    return -1;
}


void CheckVelocity(_keyvalue* keyvalue){
  for (unsigned char i = 0; i < 10; i++)
  {
    for (unsigned char j = 0; j < 8; j++)
    {
      if
    }
  }
}

void BufferToVelocity(_keyvalue* keyvalue){
  unsigned short p = (keyvalue[6][7]->buffer - keyvalue[7][7]->buffer);
  for (char i = 0; i < 10; i++){
    for (char j = 0; j < 8; j++){
      if (keymap[i][j].channeltype==bar)
      {
        if (keyvalue[i][j]->buffer < keyvalue[7][7]->buffer)
        {
          keyvalue[i][j]->buffer = keyvalue[7][7]->buffer + keyvalue[7][7]->buffer - keyvalue[i][j]->buffer;
        }        
        if (keyvalue[i][j]->buffer > keyvalue[7][6]->buffer){
          keyvalue[i][j]->velocity = 127;
        }else{
          keyvalue[i][j]->velocity = (unsigned char)(((unsigned int)(keyvalue[i][j]->buffer - keyvalue[7][7]->buffer)<<7)/p);
        }
        if (keyvalue[i][j]->velocity < preferences.minimum_velocity)
        {
          /* code */
        }
        
      }else if (keymap[i][j].channeltype==fad)
      {
        keyvalue[i][j]->velocity = (keyvalue[i][j]->buffer >> 3);
      }else if (keymap[i][j].channeltype==sw)
      {
        if (keyvalue[i][j]->buffer) keyvalue[i][j]->velocity = 127; else keyvalue[i][j]->velocity = 0;
      }
    }    
  }
}


void GetKeyValue(_keyvalue* keyvalue){
  int i;
  unsigned short buf = 0;
  for ( i = 0; i < 8; i++)
  {
    LATAbits.LATA2 = (i&4)>>2;
    LATAbits.LATA3 = (i&2)>>1;
    LATBbits.LATB4 = (i&1);
    __delay_us(10);

    buf = (unsigned short) ADC1_GetSingleConversion(ADC1_CHANNEL_AN0);
    if (keyvalue[0][i]->buffer < buf) keyvalue[0][i]->buffer = buf;

    buf = (unsigned short) ADC1_GetSingleConversion(ADC1_CHANNEL_AN1);
    if (keyvalue[1][i]->buffer < buf) keyvalue[1][i]->buffer = buf;

    buf = (unsigned short) ADC1_GetSingleConversion(ADC1_CHANNEL_AN2);
    if (keyvalue[2][i]->buffer < buf) keyvalue[2][i]->buffer = buf;

    buf = (unsigned short) ADC1_GetSingleConversion(ADC1_CHANNEL_AN3);
    if (keyvalue[3][i]->buffer < buf) keyvalue[3][i]->buffer = buf;

    buf = (unsigned short) ADC1_GetSingleConversion(ADC1_CHANNEL_AN4);
    if (keyvalue[4][i]->buffer < buf) keyvalue[4][i]->buffer = buf;

    buf = (unsigned short) ADC1_GetSingleConversion(ADC1_CHANNEL_AN5);
    if (keyvalue[5][i]->buffer < buf) keyvalue[5][i]->buffer = buf;

    buf = (unsigned short) ADC1_GetSingleConversion(ADC1_CHANNEL_AN9);
    if (keyvalue[6][i]->buffer < buf) keyvalue[6][i]->buffer = buf;

    buf = (unsigned short) ADC1_GetSingleConversion(ADC1_CHANNEL_AN10);
    if (keyvalue[7][i]->buffer < buf) keyvalue[7][i]->buffer = buf;

    buf = (unsigned short) ADC1_GetSingleConversion(ADC1_CHANNEL_AN11);
    if (keyvalue[8][i]->buffer < buf) keyvalue[8][i]->buffer = buf;

    buf = (unsigned short) IO_RB12_GetValue();
    if (keyvalue[9][i]->buffer < buf) keyvalue[9][i]->buffer = buf;
  }  
}
/**
 End of File
*/