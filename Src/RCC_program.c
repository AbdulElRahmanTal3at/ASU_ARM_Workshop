/*
*   Author : Abdulrahman
*   Version : V02
*   Date : 31 Aug 2024
*   File: RCC_program.c
*/

/* Libraries */
#include "STD_TYPES.h"
#include "BIT_MATH.h"

/* Includes */

#include "RCC_config.h"
#include "RCC_interface.h"
#include "RCC_private.h"

void MCAL_RCC_voidEnablePeripheral(u8 copy_u8BusId, u8 copy_u8PerId){
    if(copy_u8PerId < 32){
        switch (copy_u8BusId)
        {
        case RCC_AHB:
            SET_BIT(MCAL_RCC_AHBENR,copy_u8PerId);
            break;
        case RCC_APB1:
            SET_BIT(MCAL_RCC_APB1ENR,copy_u8PerId);
            break;
        case RCC_APB2:
            SET_BIT(MCAL_RCC_APB2ENR,copy_u8PerId);
            break;
        default:
            break;
        }

    }
    else{

    }

}
void MCAL_RCC_voidDisablePeripheral(u8 copy_u8BusId, u8 copy_u8PerId){
    if(copy_u8PerId < 32){
        switch (copy_u8BusId)
        {
        case RCC_AHB:
            CLEAR_BIT(MCAL_RCC_AHBENR,copy_u8PerId);
            break;
        case RCC_APB1:
            CLEAR_BIT(MCAL_RCC_APB1ENR,copy_u8PerId);
            break;
        case RCC_APB2:
            CLEAR_BIT(MCAL_RCC_APB2ENR,copy_u8PerId);
            break;
        default:
            break;
        }

    }
    else{

    }

}
void MCAL_RCC_voidInitSysClk(void){
    #if RCC_CLK_SRC == RCC_CLK_SRC_HSI
	SET_BIT(RCC_CR, RCC_CR_HSEON);
	 CLEAR_BIT(RCC_CR, RCC_CR_HSEBYP);

	while(!READ_BIT(RCC_CR, RCC_CR_HSERDY));
	   RCC_CFGR = 0x00000001;
    #elif RCC_CLK_SRC == RCC_CLK_SRC_HSE_RC
    SET_BIT(RCC_CR,16);
    SET_BIT(RCC_CR,18);
    while(!(READ_BIT(RCC_CR,17)));
    RCC_CFGR = 0x00000001;
    #elif RCC_CLK_SRC == RCC_CLK_SRC_HSI_CRY
    SET_BIT(RCC_CR,16);
    CLEAR_BIT(RCC_CR,18);
    while(!(READ_BIT(RCC_CR,17)));
    RCC_CFGR = 0x00000001;
    #elif RCC_CLK_SRC == RCC_CLK_SRC_PLL
    SET_BIT(RCC_CR,24);
    while(!(READ_BIT(RCC_CR,25)));
    RCC_CFGR = 0x00000001;

    #endif
}

