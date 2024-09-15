/*
*   Author : Abdulrahman
*   Version : V02
*   Date : 31 Aug 2024
*   File: RCC_private.h
*/

#ifndef RCC_PRIVATE_H
#define RCC_PRIVATE_H

#define MCAL_RCC_BASE_ADDRESS                     0x40021000

#define RCC_CR                  *((volatile u32*)(MCAL_RCC_BASE_ADDRESS ))
#define RCC_CFGR                *((volatile u32*)(0x40021004))

#define MCAL_RCC_AHBENR         *((volatile u32*)(MCAL_RCC_BASE_ADDRESS + 0x14))
#define MCAL_RCC_APB1ENR        *((volatile u32*)(MCAL_RCC_BASE_ADDRESS + 0x18))
#define MCAL_RCC_APB2ENR        *((volatile u32*)(MCAL_RCC_BASE_ADDRESS + 0x1C))

#define RCC_CLK_SRC_HSI             0
#define RCC_CLK_SRC_HSI_RC          1
#define RCC_CLK_SRC_HSI_CRY         2
#define RCC_CLK_SRC_PLL             3

/* RCC_CR bit definition */
#define RCC_CR_HSION                       0
#define RCC_CR_HSIRDY                      1
#define RCC_CR_HSEON                       16
#define RCC_CR_HSERDY                      17
#define RCC_CR_HSEBYP                      18
#define RCC_CR_PLLON                       24
#define RCC_CR_PLLRDY                      25


#endif
