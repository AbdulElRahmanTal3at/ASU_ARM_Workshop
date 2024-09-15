/*
*   Author : Abdulrahman
*   Version : V02
*   Date : 5 Sep 2024
*   File: GPIO_program
*/
#include "STD_TYPES.h"
#include "BIT_MATH.h"


#include "GPIO_Config.h"
#include "GPIO_Interface.h"
#include "GPIO_Private.h"



void MCAL_GPIO_void_SetPinMode(u8 copy_u8Port , u8 copy_u8Pin , u8 copy_u8Mode){
    switch (copy_u8Port)
    {
    case GPIOA:
                if (copy_u8Pin < 8 ){
                    GPIOA_CRL &= ~(0b1111 << (copy_u8Pin * 4));
                    GPIOA_CRL |=  (copy_u8Mode << (copy_u8Pin * 4));
                }
                else if(copy_u8Pin < 16){
                    copy_u8Pin -= 8;
                    GPIOA_CRH &= ~(0b1111 << (copy_u8Pin * 4));
                    GPIOA_CRH |=  (copy_u8Mode << (copy_u8Pin * 4));
                }
                break;
    case GPIOB:
                if (copy_u8Pin < 8 ){
                    GPIOB_CRL &= ~(0b1111 << (copy_u8Pin * 4));
                    GPIOB_CRL |=  (copy_u8Mode << (copy_u8Pin * 4));
                }
                else if(copy_u8Pin < 16){
                    copy_u8Pin -= 8;
                    GPIOB_CRH &= ~(0b1111 << (copy_u8Pin * 4));
                    GPIOB_CRH |=  (copy_u8Mode << (copy_u8Pin * 4));
                }
                break;
    case GPIOC:
                if (copy_u8Pin < 8 ){
                    GPIOC_CRL &= ~(0b1111 << (copy_u8Pin * 4));
                    GPIOC_CRL |=  (copy_u8Mode << (copy_u8Pin * 4));
                }
                else if(copy_u8Pin < 16){
                    copy_u8Pin -= 8;
                    GPIOC_CRH &= ~(0b1111 << (copy_u8Pin * 4));
                    GPIOC_CRH |=  (copy_u8Mode << (copy_u8Pin * 4));
                }
                break;

     default:
                break;
    }
}
void MCAL_GPIO_void_SetPinValue(u8 copy_u8Port , u8 copy_u8Pin , u8 copy_u8Value){
    switch(copy_u8Port){
        case GPIOA :
            if(copy_u8Value == GPIO_HIGH){
                SET_BIT(GPIOA_ODR,copy_u8Pin);
            }
            else{
                CLEAR_BIT(GPIOA_ODR,copy_u8Pin);
            }
        break;
        case GPIOB :
                if(copy_u8Value == GPIO_HIGH){
                SET_BIT(GPIOB_ODR,copy_u8Pin);
            }
            else{
                CLEAR_BIT(GPIOB_ODR,copy_u8Pin);
            }
        break;
        case GPIOC :
            if(copy_u8Value == GPIO_HIGH){
                SET_BIT(GPIOC_ODR,copy_u8Pin);
            }
            else{
                CLEAR_BIT(GPIOC_ODR,copy_u8Pin);
            }
        break;
        default:
         break;
    }
}
u8 MCAL_GPIO_u8GetPinValue(u8 copy_u8Port , u8 copy_u8Pin){
    u8 Local_u8Value = 0 ;
        switch (copy_u8Port)
        {
        case GPIOA:
                Local_u8Value =READ_BIT(GPIOA_IDR,copy_u8Pin);
            break;
        case GPIOC:
                Local_u8Value =READ_BIT(GPIOC_IDR,copy_u8Pin);
            break;
        case GPIOB:
                Local_u8Value =READ_BIT(GPIOB_IDR,copy_u8Pin);
            break;
        default:
            break;
        }
    return Local_u8Value ;
}
