

#include <stdio.h>
#include <string.h>
#include "RC522.h"
#include "mcc_generated_files/mcc.h"


char phrase[30]={};

/*
                         Main application
 */
void main(void)
{
    // initialize the device
    SYSTEM_Initialize();
    PCD_Init();
    EUSART_Initialize();
    sprintf(phrase,"Te encontramos alelulla \r\n");
    EUSART_PrintString(phrase,0);
    
    


    while (1)
    {   

        if (PICC_IsNewCardPresent()){
            sprintf(phrase,"Te encontramos alelulla r\n");
            EUSART_PrintString(phrase,0);
             if (PICC_ReadCardSerial() )
            {
                  // Enviamos serialemente su UID
                  sprintf(phrase,"Card UID:");
                  //enviaDebug(phrase,0);
                  for (char i = 0; i < uid.size; i++) {
                          sprintf(phrase,uid.uidByte[i] < 0x10 ? " " : " ");
                          EUSART_PrintString(phrase,0);
                          sprintf(phrase,"%02X",uid.uidByte[i]);   
                          EUSART_PrintString(phrase,0);
                  } 
                  // Terminamos la lectura de la tarjeta  actual
                  PICC_HaltA(); 
             }
        }else{
            sprintf(phrase,"\n No Detectada\r\n"); 
            EUSART_PrintString(phrase,0);
        }
        __delay_ms(1000); 
    }
}
/**
 End of File
*/