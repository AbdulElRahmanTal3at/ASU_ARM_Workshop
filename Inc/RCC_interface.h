/*
*   Author : Abdulrahman
*   Version : V02
*   Date : 31 Aug 2024
*   File: RCC_interface.h
*/

#ifndef RCC_INTERFACE_H
#define RCC_INTERFACE_H

#define RCC_AHB   0
#define RCC_APB1  1
#define RCC_APB2  2

#define RCC_AHB_DMA1    0

void MCAL_RCC_voidInitSysClk(void);
void MCAL_RCC_voidEnablePeripheral(u8 copy_u8BusId, u8 copy_u8PerId);
void MCAL_RCC_voidDisablePeripheral(u8 copy_u8BusId, u8 copy_u8PerId);


#endif
