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
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.4
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

#define CHIP_NUMBER 0
#define CHIP_ADDRESS 0x00
#define USER_RX_BUFFER_SIZE 4
#define EUSART_RX_BUFFER_SIZE 8

///from eusart.c

extern void (*EUSART_FramingErrorHandler)(void);
extern void (*EUSART_OverrunErrorHandler)(void);
extern void (*EUSART_ErrorHandler)(void);

extern volatile uint8_t eusartRxHead;
extern volatile uint8_t eusartRxTail;
extern volatile uint8_t eusartRxBuffer[EUSART_RX_BUFFER_SIZE];
extern volatile eusart_status_t eusartRxStatusBuffer[EUSART_RX_BUFFER_SIZE];
extern volatile uint8_t eusartRxCount;
extern volatile eusart_status_t eusartRxLastError;

///for user usart function
uint8_t user_rx_buffer[USER_RX_BUFFER_SIZE] = {0};
uint8_t user_rx_count = 0;

/*
                         Main application
 */
extern void UserRxInterruptHandler(void);

bool change_request=0;

void LED_increment(uint8_t *buffer);

void main(void)
{
    uint8_t command_buffer = 0;
    uint8_t LED_buffer[3] = {0};
    const uint8_t LED_zeros[3] = {0};
    uint8_t LEDpointer = 0;
    uint8_t timecounter = 0;
    uint8_t statecounter = 0;

    // initialize the device
    SYSTEM_Initialize();
    EUSART_SetRxInterruptHandler(UserRxInterruptHandler);

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

    TMR2_Start();

    while (1)
    {
        while (!TMR2_HasOverflowOccured())
        {
          if (change_request != 0)
          {
            INTERRUPT_GlobalInterruptDisable();
            command_buffer = user_rx_buffer[0]>>5;
            LED_buffer[0] = 0x7F & (user_rx_buffer[0]<<2 | user_rx_buffer[1]>>6);
            LED_buffer[1] = 0x7F & (user_rx_buffer[1]<<1 | user_rx_buffer[2]>>7);
            LED_buffer[2] = 0x7F & (user_rx_buffer[2]);
            change_request = 0;
            INTERRUPT_GlobalInterruptEnable();
            
            timecounter = 0;
            statecounter = 0;
          }
        }
        switch (command_buffer)
        {
        case 0:
          LED_increment(LED_buffer);
          break;
        
        case 1:
          if (timecounter++ >= 36)
          {
            timecounter = 0;
            if (statecounter==0)
            {
              statecounter = 1;
            }else{
              statecounter = 0;
            }
          }
          
          if (statecounter==0)
          {
            LED_increment(LED_zeros);
          }else{
            LED_increment(LED_buffer);
          }
          
          break;

        case 2:
          if (statecounter >= 5)
          {
            LED_increment(LED_buffer);
          }else
          {
            if (timecounter++ >= 6){
              timecounter = 0;
              statecounter++;
            }
            
            if ((statecounter&1)==0)
            {
              LED_increment(LED_zeros);
            }else{
              LED_increment(LED_buffer);
            }

          }
          break;
        }
    }
}

void LED_increment(uint8_t *buffer){
  uint8_t i=0;
  if (IO_LED1_GetValue() == 1){
    IO_LED1_SetLow();
    IO_LED2_SetHigh();
    i=1;
  }else if (IO_LED2_GetValue() == 1){
    IO_LED2_SetLow();
    IO_LED3_SetHigh();
    i=2;
  }else{
    IO_LED3_SetLow();
    IO_LED1_SetHigh();
    i=0;
  }
  IO_LEDA_LAT = buffer[i] & 1;
  IO_LEDB_LAT = (buffer[i]>>1) & 1;
  IO_LEDB_LAT = (buffer[i]>>2) & 1;
  IO_LEDB_LAT = (buffer[i]>>3) & 1;
  IO_LEDB_LAT = (buffer[i]>>4) & 1;
  IO_LEDB_LAT = (buffer[i]>>5) & 1;
  IO_LEDB_LAT = (buffer[i]>>6) & 1;
}

void UserRxInterruptHandler(void){
  
  /******************MCC Code******************/
  eusartRxStatusBuffer[eusartRxHead].status = 0;

  if(RC1STAbits.FERR){
      eusartRxStatusBuffer[eusartRxHead].ferr = 1;
      EUSART_FramingErrorHandler();
  }

  if(RC1STAbits.OERR){
      eusartRxStatusBuffer[eusartRxHead].oerr = 1;
      EUSART_OverrunErrorHandler();
  }
   
  if(eusartRxStatusBuffer[eusartRxHead].status){
      EUSART_ErrorHandler();
  } else {
      /*MCC*/
      /*eusartRxBuffer[*/eusartRxHead++/*] = RC1REG*/;
      if(sizeof(eusartRxBuffer) <= eusartRxHead)
      {
          eusartRxHead = 0;
      }
      eusartRxCount++;
      /*MCC end*/
      
      if (RC1STAbits.RX9D == 1)
      {
        if(RC1REG==CHIP_ADDRESS){
          RC1STAbits.ADDEN = 0;
          change_request = 0;
          user_rx_count = 0;
        }else if(RC1STAbits.ADDEN == 0){
          RC1STAbits.ADDEN = 1;
          change_request = 1;
        }
      }else
      {
        user_rx_buffer[user_rx_count++] = RC1REG;
        if(sizeof(user_rx_buffer) <= user_rx_count)
        {
            user_rx_count = 0;
        }
      }
  }
    
  // or set custom function using EUSART_SetRxInterruptHandler()
  /**********************/

  return;
}

/**
 End of File
*/