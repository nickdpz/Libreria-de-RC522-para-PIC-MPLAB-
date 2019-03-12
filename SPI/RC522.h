/* 
 * File:   
 * Author: 
 * Comments:
 * Revision history: 
 */

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef RC522_H
#define	RC522_H

#include <stdbool.h>
#include <stdint.h>

const unsigned char MFRC522_firmware_referenceV0_0[] = {
	0x00, 0x87, 0x98, 0x0f, 0x49, 0xFF, 0x07, 0x19,
	0xBF, 0x22, 0x30, 0x49, 0x59, 0x63, 0xAD, 0xCA,
	0x7F, 0xE3, 0x4E, 0x03, 0x5C, 0x4E, 0x49, 0x50,
	0x47, 0x9A, 0x37, 0x61, 0xE7, 0xE2, 0xC6, 0x2E,
	0x75, 0x5A, 0xED, 0x04, 0x3D, 0x02, 0x4B, 0x78,
	0x32, 0xFF, 0x58, 0x3B, 0x7C, 0xE9, 0x00, 0x94,
	0xB4, 0x4A, 0x59, 0x5B, 0xFD, 0xC9, 0x29, 0xDF,
	0x35, 0x96, 0x98, 0x9E, 0x4F, 0x30, 0x32, 0x8D
};
// Version 1.0 (0x91)
// NXP Semiconductors; Rev. 3.8 - 17 September 2014; 16.1.1 self-test
const unsigned char MFRC522_firmware_referenceV1_0[] = {
	0x00, 0xC6, 0x37, 0xD5, 0x32, 0xB7, 0x57, 0x5C,
	0xC2, 0xD8, 0x7C, 0x4D, 0xD9, 0x70, 0xC7, 0x73,
	0x10, 0xE6, 0xD2, 0xAA, 0x5E, 0xA1, 0x3E, 0x5A,
	0x14, 0xAF, 0x30, 0x61, 0xC9, 0x70, 0xDB, 0x2E,
	0x64, 0x22, 0x72, 0xB5, 0xBD, 0x65, 0xF4, 0xEC,
	0x22, 0xBC, 0xD3, 0x72, 0x35, 0xCD, 0xAA, 0x41,
	0x1F, 0xA7, 0xF3, 0x53, 0x14, 0xDE, 0x7E, 0x02,
	0xD9, 0x0F, 0xB5, 0x5E, 0x25, 0x1D, 0x29, 0x79
};
// Version 2.0 (0x92)
// NXP Semiconductors; Rev. 3.8 - 17 September 2014; 16.1.1 self-test
const unsigned char MFRC522_firmware_referenceV2_0[] = {
	0x00, 0xEB, 0x66, 0xBA, 0x57, 0xBF, 0x23, 0x95,
	0xD0, 0xE3, 0x0D, 0x3D, 0x27, 0x89, 0x5C, 0xDE,
	0x9D, 0x3B, 0xA7, 0x00, 0x21, 0x5B, 0x89, 0x82,
	0x51, 0x3A, 0xEB, 0x02, 0x0C, 0xA5, 0x00, 0x49,
	0x7C, 0x84, 0x4D, 0xB3, 0xCC, 0xD2, 0x1B, 0x81,
	0x5D, 0x48, 0x76, 0xD5, 0x71, 0x61, 0x21, 0xA9,
	0x86, 0x96, 0x83, 0x38, 0xCF, 0x9D, 0x5B, 0x6D,
	0xDC, 0x15, 0xBA, 0x3E, 0x7D, 0x95, 0x3B, 0x2F
};
// Clone
// Fudan Semiconductor FM17522 (0x88)
const unsigned char FM17522_firmware_reference[] = {
	0x00, 0xD6, 0x78, 0x8C, 0xE2, 0xAA, 0x0C, 0x18,
	0x2A, 0xB8, 0x7A, 0x7F, 0xD3, 0x6A, 0xCF, 0x0B,
	0xB1, 0x37, 0x63, 0x4B, 0x69, 0xAE, 0x91, 0xC7,
	0xC3, 0x97, 0xAE, 0x77, 0xF4, 0x37, 0xD7, 0x9B,
	0x7C, 0xF5, 0x3C, 0x11, 0x8F, 0x15, 0xC3, 0xD7,
	0xC1, 0x5B, 0x00, 0x2A, 0xD0, 0x75, 0xDE, 0x9E,
	0x51, 0x64, 0xAB, 0x3E, 0xE9, 0x15, 0xB5, 0xAB,
	0x56, 0x9A, 0x98, 0x82, 0x26, 0xEA, 0x2A, 0x62
};

typedef struct {
		unsigned char		size;			// Number of bytes in the UID. 4, 7 or 10.
		unsigned char		uidByte[10];
		unsigned char		sak;			// The SAK (Select acknowledge) byte returned from the PICC after successful selection.
	} Uid;

Uid uid;    
    
typedef struct {
		unsigned char	keyByte[6];
	} MIFARE_Key;
    
    
//MF522 comando palabra
#define PCD_Idle				 0x00		// no action, cancels current command execution
#define	PCD_Mem					 0x01		// stores 25 bytes into the internal buffer
#define	PCD_GenerateRandomID	 0x02		// generates a 10-byte random ID number
#define PCD_CalcCRC				 0x03		// activates the CRC coprocessor or performs a self-test
#define	PCD_Transmit			 0x04		// transmits data from the FIFO buffer
#define	PCD_NoCmdChange			 0x07		// no command change, can be used to modify the CommandReg register bits without affecting the command, for example, the PowerDown bit
#define	PCD_Receive				 0x08		// activates the receiver circuits
#define	PCD_Transceive 			 0x0C		// transmits data from FIFO buffer to antenna and automatically activates the receiver after transmission
#define	PCD_MFAuthent 			 0x0E		// performs the MIFARE standard authentication as a reader
#define	PCD_SoftReset			 0x0F		// resets the MFRC522

#define PCD_IDLE              0x00               // NO action; Y cancelar el comando
#define PCD_AUTHENT           0x0E               // autenticación de clave
#define PCD_RECEIVE           0x08               // recepción de datos
#define PCD_TRANSMIT          0x04               // Enviar datos
#define PCD_TRANSCEIVE        0x0C               // Enviar y recibir datos
#define PCD_RESETPHASE        0x0F               // reajustar
#define PCD_CALCCRC           0x03               // CRC calcular
	
	// MFRC522 RxGain[2:0] masks, defines the receiver's signal voltage gain factor (on the PCD).
	// Described in 9.3.3.6 / table 98 of the datasheet at http://www.nxp.com/documents/data_sheet/MFRC522.pdf
#define	RxGain_18dB				 0x00 << 4	// 000b - 18 dB, minimum
#define	RxGain_23dB				 0x01 << 4	// 001b - 23 dB
#define	RxGain_18dB_2			 0x02 << 4	// 010b - 18 dB, it seems 010b is a duplicate for 000b
#define	RxGain_23dB_2			 0x03 << 4	// 011b - 23 dB, it seems 011b is a duplicate for 001b
#define	RxGain_33dB				 0x04 << 4	// 100b - 33 dB, average, and typical default
#define	RxGain_38dB				 0x05 << 4	// 101b - 38 dB
#define	RxGain_43dB				 0x06 << 4	// 110b - 43 dB
#define	RxGain_48dB				 0x07 << 4	// 111b - 48 dB, maximum
#define	RxGain_min				 0x00 << 4	// 000b - 18 dB, minimum, convenience for RxGain_18dB
#define	RxGain_avg				 0x04 << 4	// 100b - 33 dB, average, convenience for RxGain_33dB
#define	RxGain_max				 0x07 << 4		// 111b - 48 dB, maximum, convenience for RxGain_48dB



#define PICC_CMD_REQA			 0x26		// REQuest command, Type A. Invites PICCs in state IDLE to go to READY and prepare for anticollision or selection. 7 bit frame.
#define	PICC_CMD_WUPA			 0x52		// Wake-UP command, Type A. Invites PICCs in state IDLE and HALT to go to READY(*) and prepare for anticollision or selection. 7 bit frame.
#define	PICC_CMD_CT				 0x88		// Cascade Tag. Not really a command, but used during anti collision.
#define	PICC_CMD_SEL_CL1		 0x93		// Anti collision/Select, Cascade Level 1
#define	PICC_CMD_SEL_CL2		 0x95		// Anti collision/Select, Cascade Level 2
#define	PICC_CMD_SEL_CL3		 0x97		// Anti collision/Select, Cascade Level 3
#define	PICC_CMD_HLTA			 0x50		// HaLT command, Type A. Instructs an ACTIVE PICC to go to state HALT.
#define	PICC_CMD_RATS            0xE0     // Request command for Answer To Reset.
	// The commands used for MIFiRE Classic (from http://www.mouser.com/ds/2/302/MF1S503x-89574.pdf, Section 9)
	// Use PCD_MFAuthent to authenticate access to a sector, then use these commands to read/write/modify the blocks on the sector.
	// The read/write commands can also be used for MIFARE Ultralight.
#define	PICC_CMD_MF_AUTH_KEY_A	 0x60		// Perform authentication with Key A
#define	PICC_CMD_MF_AUTH_KEY_B	 0x61		// Perform authentication with Key B
#define	PICC_CMD_MF_READ		 0x30		// Reads one 16 byte block from the authenticated sector of the PICC. Also used for MIFARE Ultralight.
#define	PICC_CMD_MF_WRITE		 0xA0		// Writes one 16 byte block to the authenticated sector of the PICC. Called "COMPATIBILITY WRITE" for MIFARE Ultralight.
#define	PICC_CMD_MF_DECREMENT	 0xC0		// Decrements the contents of a block and stores the result in the internal data register.
#define	PICC_CMD_MF_INCREMENT	 0xC1		// Increments the contents of a block and stores the result in the internal data register.
#define	PICC_CMD_MF_RESTORE		 0xC2		// Reads the contents of a block into the internal data register.
#define	PICC_CMD_MF_TRANSFER	 0xB0		// Writes the contents of the internal data register to a block.
	// The commands used for MIFARE Ultralight (from http://www.nxp.com/documents/data_sheet/MF0ICU1.pdf, Section 8.6)
	// The PICC_CMD_MF_READ and PICC_CMD_MF_WRITE can also be used for MIFARE Ultralight.
#define	PICC_CMD_UL_WRITE		 0xA2		// Writes one 4 byte page to the PICC.

//MF522 Código de error de comunicación cuando regresó
#define	STATUS_OK				0x00	// Success
#define	STATUS_ERROR			0x01	// Error in communication
#define	STATUS_COLLISION		0x02	// Collission detected
#define	STATUS_TIMEOUT			0x03	// Timeout in communication.
#define	STATUS_NO_ROOM			0x04	// A buffer is not big enough.
#define	STATUS_INTERNAL_ERROR	0x05	// Internal error in the code. Should not happen ;-)
#define	STATUS_INVALID			0x06	// Invalid argument.
#define	STATUS_CRC_WRONG		0x07	// The CRC_A does not match
#define	STATUS_MIFARE_NACK		0xFF	// A MIFARE PICC responded with NAK.


//------------------ MFRC522 registro---------------
//Page 0:Command and Status
#define     Reserved00            0x00    
#define     CommandReg            0x01    
#define     CommIEnReg            0x02    
#define     DivlEnReg             0x03    
#define     ComIrqReg             0x04  
#define     DivIrqReg             0x05
#define     ErrorReg              0x06    
#define     Status1Reg            0x07    
#define     Status2Reg            0x08    
#define     FIFODataReg           0x09
#define     FIFOLevelReg          0x0A
#define     WaterLevelReg         0x0B
#define     ControlReg            0x0C
#define     BitFramingReg         0x0D
#define     CollReg               0x0E
#define     Reserved01            0x0F
//Page 1:Command     
#define     Reserved10            0x10
#define     ModeReg               0x11
#define     TxModeReg             0x12
#define     RxModeReg             0x13
#define     TxControlReg          0x14
#define     TxASKReg              0x15
#define     TxSelReg              0x16
#define     RxSelReg              0x17
#define     RxThresholdReg        0x18
#define     DemodReg              0x19
#define     Reserved11            0x1A
#define     Reserved12            0x1B
#define     MifareReg             0x1C
#define     Reserved13            0x1D
#define     Reserved14            0x1E
#define     SerialSpeedReg        0x1F
//Page 2:CFG    
#define     Reserved20            0x20  
#define     CRCResultRegH         0x21
#define     CRCResultRegL         0x22
#define     Reserved21            0x23
#define     ModWidthReg           0x24
#define     Reserved22            0x25
#define     RFCfgReg              0x26
#define     GsNReg                0x27
#define     CWGsPReg	          0x28
#define     ModGsPReg             0x29
#define     TModeReg              0x2A
#define     TPrescalerReg         0x2B
#define     TReloadRegH           0x2C
#define     TReloadRegL           0x2D
#define     TCounterValueRegH     0x2E
#define     TCounterValueRegL     0x2F
//Page 3:TestRegister     
#define     Reserved30            0x30
#define     TestSel1Reg           0x31
#define     TestSel2Reg           0x32
#define     TestPinEnReg          0x33
#define     TestPinValueReg       0x34
#define     TestBusReg            0x35
#define     AutoTestReg           0x36
#define     VersionReg            0x37
#define     AnalogTestReg         0x38
#define     TestDAC1Reg           0x39  
#define     TestDAC2Reg           0x3A   
#define     TestADCReg            0x3B   
#define     Reserved31            0x3C   
#define     Reserved32            0x3D   
#define     Reserved33            0x3E   
#define     Reserved34			  0x3F
//-----------------------------------------------
void PCD_WriteRegister(unsigned char addr, unsigned char value);    
void PCD_WriteRegisters( unsigned char addr,unsigned char count,unsigned char *values);    
unsigned char PCD_ReadRegister(unsigned char addr);    
void PCD_ReadRegisters(	unsigned char addr,	///< The register to read from. One of the PCD_Register enums.
                        unsigned char count,			///< The number of bytes to read
						unsigned char *values,		///< Byte array to store the values in.
                        unsigned char rxAlign		///< Only bit positions rxAlign..7 in values[0] are updated.
								);
void PCD_SetRegisterBitMask(	unsigned char reg,	///< The register to update. One of the PCD_Register enums.
										unsigned char mask			///< The bits to set.
									);
void PCD_ClearRegisterBitMask(	unsigned char reg,	///< The register to update. One of the PCD_Register enums.
								unsigned char mask			///< The bits to clear.
									  );    
unsigned char  PCD_CalculateCRC(	unsigned char *data,		///< In: Pointer to the data to transfer to the FIFO for CRC calculation.
						unsigned char length,	///< In: The number of bytes to transfer.
						unsigned char *result	///< Out: Pointer to result buffer. Result is written to result[0..1], low byte first.
					 ) ;
void PCD_Init(void);
void PCD_Reset(void);
void PCD_AntennaOn(void);
void PCD_AntennaOff(void);
unsigned char PCD_GetAntennaGain();
void PCD_SetAntennaGain(unsigned char mask);
bool PCD_PerformSelfTest(void);
void PCD_SoftPowerDown(void);   
void PCD_SoftPowerUp(void);
unsigned char PCD_TransceiveData(	unsigned char *sendData,		///< Pointer to the data to transfer to the FIFO.
									unsigned char sendLen,		///< Number of bytes to transfer to the FIFO.
									unsigned char *backData,		///< nullptr or pointer to buffer if data should be read back after executing the command.
									unsigned char *backLen,		///< In: Max number of unsigned chars to write to *backData. Out: The number of bytes returned.
									unsigned char *validBits,	///< In/Out: The number of valid bits in the last byte. 0 for 8 valid bits. Default nullptr.
									unsigned char rxAlign,		///< In: Defines the bit position in backData[0] for the first bit received. Default 0.
									bool checkCRC		///< In: True => The last two bytes of the response is assumed to be a CRC_A that must be validated.
								 );
    unsigned char PCD_CommunicateWithPICC(	unsigned char command,		///< The command to execute. One of the PCD_Command enums.
											unsigned char waitIRq,		///< The bits in the ComIrqReg register that signals successful completion of the command.
											unsigned char *sendData,		///< Pointer to the data to transfer to the FIFO.
											unsigned char sendLen,		///< Number of unsigned chars to transfer to the FIFO.
											unsigned char *backData,		///< nullptr or pointer to buffer if data should be read back after executing the command.
											unsigned char *backLen,		///< In: Max number of bytes to write to *backData. Out: The number of bytes returned.
											unsigned char *validBits,	///< In/Out: The number of valid bits in the last byte. 0 for 8 valid bits.
											unsigned char rxAlign,		///< In: Defines the bit position in backData[0] for the first bit received. Default 0.
											bool checkCRC		///< In: True => The last two bytes of the response is assumed to be a CRC_A that must be validated.
									 );
    
    unsigned char PICC_RequestA(	unsigned char *bufferATQA,	///< The buffer to store the ATQA (Answer to request) in
								unsigned char *bufferSize	///< Buffer size, at least two bytes. Also number of bytes returned if STATUS_OK.
										);
    unsigned char PICC_WakeupA(	unsigned char *bufferATQA,	///< The buffer to store the ATQA (Answer to request) in
							unsigned char *bufferSize	///< Buffer size, at least two bytes. Also number of bytes returned if STATUS_OK.
										);
    unsigned char PICC_REQA_or_WUPA(	unsigned char command, 		///< The command to send - PICC_CMD_REQA or PICC_CMD_WUPA
									unsigned char *bufferATQA,	///< The buffer to store the ATQA (Answer to request) in
									unsigned char *bufferSize	///< Buffer size, at least two bytes. Also number of bytes returned if STATUS_OK.
											);
    unsigned char PICC_Select(	Uid *uid,			///< Pointer to Uid struct. Normally output, but can also be used to supply a known UID.
											unsigned char validBits		///< The number of known UID bits supplied in *uid. Normally 0. If set you must also supply uid->size.
										 );
    unsigned char PICC_HaltA(void);
    
    unsigned char PCD_Authenticate(unsigned char command,		///< PICC_CMD_MF_AUTH_KEY_A or PICC_CMD_MF_AUTH_KEY_B
											unsigned char blockAddr, 	///< The block number. See numbering in the comments in the .h file.
											MIFARE_Key *key,	///< Pointer to the Crypteo1 key to use (6 bytes)
											Uid *uid			///< Pointer to Uid struct. The first 4 bytes of the UID is used.
											);
    
    void PCD_StopCrypto1(void);
    
    unsigned char MIFARE_Read(	unsigned char blockAddr, 	///< MIFARE Classic: The block (0-0xff) number. MIFARE Ultralight: The first page to return data from.
							unsigned char *buffer,		///< The buffer to store the data in
                            unsigned char *bufferSize	///< Buffer size, at least 18 bytes. Also number of bytes returned if STATUS_OK.
										);
    unsigned char MIFARE_Write(	unsigned char blockAddr, ///< MIFARE Classic: The block (0-0xff) number. MIFARE Ultralight: The page (2-15) to write to.
							unsigned char *buffer,	///< The 16 bytes to write to the PICC
							unsigned char bufferSize	///< Buffer size, must be at least 16 bytes. Exactly 16 bytes are written.
										);
    unsigned char MIFARE_Ultralight_Write(	unsigned char page, 		///< The page (2-15) to write to.
										unsigned char *buffer,	///< The 4 bytes to write to the PICC
										unsigned char bufferSize	///< Buffer size, must be at least 4 bytes. Exactly 4 bytes are written.
													);
    unsigned char MIFARE_Decrement(	unsigned char blockAddr, ///< The block (0-0xff) number.
								uint32_t delta		///< This number is subtracted from the value of block blockAddr.
											); 
    unsigned char MIFARE_Increment(	unsigned char blockAddr, ///< The block (0-0xff) number.
												uint32_t delta		///< This number is added to the value of block blockAddr.
											); 
    unsigned char MIFARE_Restore(	unsigned char  blockAddr);
    unsigned char MIFARE_TwoStepHelper(	unsigned char command,	///< The command to use
									unsigned char blockAddr,	///< The block (0-0xff) number.
									uint32_t data		///< The data to transfer in step 2
													);
    unsigned char MIFARE_Transfer(	unsigned char blockAddr ///< The block (0-0xff) number.
											);
    unsigned char MIFARE_GetValue(unsigned char blockAddr, uint32_t *value);
    unsigned char MIFARE_SetValue(unsigned char blockAddr, uint32_t value);
    unsigned char PCD_NTAG216_AUTH(unsigned char *passWord, unsigned char pACK[]); 
    
    unsigned char PCD_MIFARE_Transceive(unsigned char *sendData,		///< Pointer to the data to transfer to the FIFO. Do NOT include the CRC_A.
										unsigned char sendLen,		///< Number of bytes in sendData.
										bool acceptTimeout	///< True => A timeout is also success
												);
    bool PICC_IsNewCardPresent(void) ;
    bool PICC_ReadCardSerial(void);
#ifdef	__cplusplus
}
#endif /* __cplusplus */

#endif	/* XC_HEADER_TEMPLATE_H */