

#include <stdio.h>
#include <string.h>
#include "RC522.h"
#include "mcc_generated_files/mcc.h"


char phrase[30]={};
char i=0;
/*
                         Main application
 */
void main(void)
{
    // initialize the device
    SYSTEM_Initialize();
    PCD_Init();
    EUSART_Initialize();
    sprintf(phrase,"Iniciando \r\n");
    EUSART_PrintString(phrase,0);
    while (1){   
        if (PICC_IsNewCardPresent()){
            sprintf(phrase,"Tarjeta Detectada \r\n");
            EUSART_PrintString(phrase,0);
             if (PICC_ReadCardSerial()){
                  sprintf(phrase,"Card UID:");
                  for (i = 0; i < uid.size; i++) {
                          sprintf(phrase,uid.uidByte[i] < 0x10 ? " " : " ");
                          EUSART_PrintString(phrase,0);
                          sprintf(phrase,"%02X",uid.uidByte[i]);   
                          EUSART_PrintString(phrase,0);
                  } 
                  PICC_HaltA(); 
                  PCD_StopCrypto1();
                  sprintf(phrase,"\r\n");   
                  EUSART_PrintString(phrase,0);
             }
        }
        /*else{
            //sprintf(phrase,"%02X \r\n",PCD_ReadRegister(VersionReg));//Debe salir 91H 
            //EUSART_PrintString(phrase,0);
            
        }*/
        __delay_ms(1000); 
        
    }
}
/*
 End of File
*/