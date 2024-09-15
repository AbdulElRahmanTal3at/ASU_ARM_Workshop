/*
*   Author : Abdulrahman
*   Version : V02
*   Date : 5 Sep 2024
*   File: GPIO_PRIVATE_H
*/
#ifndef GPIO_PRIVATE_H
#define GPIO_PRIVATE_H

#define GPIO_PORTA          *((volatile u32 *)0x40010800)
#define GPIO_PORTB          *((volatile u32 *)0x40010C00)
#define GPIO_PORTC          *((volatile u32 *)0x40011000)


#define GPIOA_CRL            *((volatile u32 *)GPIO_PORTA + 0X00)
#define GPIOA_CRH            *((volatile u32 *)GPIO_PORTA + 0X04)
#define GPIOA_IDR            *((volatile u32 *)GPIO_PORTA + 0X08)
#define GPIOA_ODR            *((volatile u32 *)GPIO_PORTA + 0X0C)

#define GPIOB_CRL            *((volatile u32 *)GPIO_PORTB + 0X00)
#define GPIOB_CRH            *((volatile u32 *)GPIO_PORTB + 0X04)
#define GPIOB_IDR            *((volatile u32 *)GPIO_PORTB + 0X08)
#define GPIOB_ODR            *((volatile u32 *)GPIO_PORTB + 0X0C)

#define GPIOC_CRL            *((volatile u32 *)GPIO_PORTC + 0X00)
#define GPIOC_CRH            *((volatile u32 *)GPIO_PORTC + 0X04)
#define GPIOC_IDR            *((volatile u32 *)GPIO_PORTC + 0X08)
#define GPIOC_ODR            *((volatile u32 *)GPIO_PORTC + 0X0C)

#endif
