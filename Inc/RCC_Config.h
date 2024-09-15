/*
*   Author : Abdulrahman
*   Version : V02
*   Date : 31 Aug 2024
*   File: RCC_config.h
*/

#ifndef RCC_CONFIG_h
#define RCC_CONFIG_h
/* Macro to Configure System Source     */
/* Options : RCC_CLK_SRC_HSI            */
/*           RCC_CLK_SRC_HSE_RC         */
/*           RCC_CLK_SRC_HSE_CRY        */
/*           RCC_CLK_SRC_PLL            */
#define RCC_CLK_SRC      RCC_CLK_SRC_HSE_CRY

/*      Choose PLL input               */
/* Options:     RCC_PLL_HSE_DIV_2      */
/*              RCC_PLL_HSI_DIV_2      */
/*              RCC_PLL_HSE            */

/* Note: Select value only if you choose PLL to be your clock source*/

#if RCC_CLK_SRC == RCC_CLKSRC_PLL
#define RCC_PLL_INPUT    RCC_PLL_HSE
#endif


#endif
