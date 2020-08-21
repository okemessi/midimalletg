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

#define CHIP_NUMBER 1
#define CHIP_ADDRESS 0x31
#define MAXIMUM_KEY_NUMBER 15
#define SCAN_THRESHOLD 4 //min. 00 0000 0100 (half of 000 0001)

///from eusart.c
#define EUSART_RX_BUFFER_SIZE 8

extern void (*EUSART_FramingErrorHandler)(void);
extern void (*EUSART_OverrunErrorHandler)(void);
extern void (*EUSART_ErrorHandler)(void);

extern volatile uint8_t eusartRxHead;
extern volatile uint8_t eusartRxTail;
extern volatile uint8_t eusartRxBuffer[EUSART_RX_BUFFER_SIZE];
extern volatile eusart_status_t eusartRxStatusBuffer[EUSART_RX_BUFFER_SIZE];
extern volatile uint8_t eusartRxCount;
extern volatile eusart_status_t eusartRxLastError;

/*
                         Main application
 */
inline static void max_with_threshold(unsigned int*,unsigned int);
extern void UserRxInterruptHandler(void);

bool tx_request=0;

void main(void)
{
    unsigned int scan_max[MAXIMUM_KEY_NUMBER]={0};
    unsigned int scan_max_prev[MAXIMUM_KEY_NUMBER]={0};
    unsigned int i = 0;
    union 
    {
      unsigned int twobyte;
      unsigned char bytes[2];
    }packet;
    unsigned int IOvalue[2]={0,0x3FF};

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

    while (1)
    {
        max_with_threshold(&scan_max[1], ADCC_GetSingleConversion(AN_KEY1));
        max_with_threshold(&scan_max[2], ADCC_GetSingleConversion(AN_KEY2));
        max_with_threshold(&scan_max[3], ADCC_GetSingleConversion(AN_KEY3));
        max_with_threshold(&scan_max[4], ADCC_GetSingleConversion(AN_KEY4));
        max_with_threshold(&scan_max[5], ADCC_GetSingleConversion(AN_KEY5));
        max_with_threshold(&scan_max[6], ADCC_GetSingleConversion(AN_KEY6));
        max_with_threshold(&scan_max[7], ADCC_GetSingleConversion(AN_KEY7));
        max_with_threshold(&scan_max[8], ADCC_GetSingleConversion(AN_KEY8));
        max_with_threshold(&scan_max[9], ADCC_GetSingleConversion(AN_KEY9));
        max_with_threshold(&scan_max[10], ADCC_GetSingleConversion(AN_KEY10));
        max_with_threshold(&scan_max[11], ADCC_GetSingleConversion(AN_KEY11));
        max_with_threshold(&scan_max[12], ADCC_GetSingleConversion(AN_Fader1));
        max_with_threshold(&scan_max[13], ADCC_GetSingleConversion(AN_Fader2));
        max_with_threshold(&scan_max[14], IOvalue[IO_Button1_GetValue()]);
        max_with_threshold(&scan_max[15], IOvalue[IO_Button2_GetValue()]);
        max_with_threshold(&scan_max[0], IOvalue[IO_ShiftButton_GetValue()]);
        
        if (tx_request != 0)
        {
          tx_request = 0;
          IO_DE_SetHigh();
          for (i = 0; i < MAXIMUM_KEY_NUMBER; i++)
          {
            if (scan_max_prev[i]!=scan_max[i])
            {
              packet.twobyte = (i<<10) | scan_max[i];
              EUSART_Write(packet.bytes[0]);
              EUSART_Write(packet.bytes[1]);
            }
            scan_max_prev[i]=scan_max[i];
            scan_max[i]= 0;
          }

          while (!EUSART_is_tx_done());

          TX1STAbits.TX9D = 1;
          EUSART_Write(0x7F); //0111 1111
          while (!EUSART_is_tx_done());
          TX1STAbits.TX9D = 0;
          IO_DE_SetLow();
        }
    }
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
      EUSART_RxDataHandler();
  }
    
  // or set custom function using EUSART_SetRxInterruptHandler()
  /**********************/

  if (EUSART_Read() == CHIP_ADDRESS)
  {
    tx_request = 1;
  }
  return;
}

static void max_with_threshold(unsigned int *scan_max, unsigned int scan_buffer){
  if (*scan_max < scan_buffer && scan_buffer >= SCAN_THRESHOLD)
  {
    *scan_max = scan_buffer;
  }
  return;
}
/**
 End of File
*/