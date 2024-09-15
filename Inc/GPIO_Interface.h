/*
*   Author : Abdulrahman
*   Version : V02
*   Date : 5 Sep 2024
*   File: GPIO_INTERFACE_H
*/
/***********************************************/
#ifndef GPIO_INTERFACE_H
#define GPIO_INTERFACE_H

/* COPY_u8Port parameter options */
#define GPIOA 0
#define GPIOB 1
#define GPIOC 2

/* COPY_u8Pin parameter options */
#define GPIO_PIN0    0
#define GPIO_PIN1    1
#define GPIO_PIN2    2
#define GPIO_PIN3    3
#define GPIO_PIN4    4
#define GPIO_PIN5    5
#define GPIO_PIN6    6
#define GPIO_PIN7    7
#define GPIO_PIN8    8
#define GPIO_PIN9    9
#define GPIO_PIN10   10

/* COPY_u8Value parameter options */
#define GPIO_LOW     0
#define GPIO_HIGH     1
/* COPY_u8Mode parameter  options */
#define GPIO_INPUT_ANALOG_MODE                               0b0000
#define GPIO_INPUT_FLOATING_MODE                             0b0100
#define GPIO_INPUT_PULL_UP_DOWN_MODE                         0b1000

#define GPIO_OUTPUT_PUSH_PULL_10MHZ_MODE                     0b0001
#define GPIO_OUTPUT_OPEN_DRAIN_10MHZ_MODE                    0b0101

#define GPIO_OUTPUT_PUSH_PULL_2MHZ_MODE                      0b0010
#define GPIO_OUTPUT_OPEN_DRAIN_2MHZ_MODE                     0b0110

#define GPIO_OUTPUT_PUSH_PULL_50MHZ_MODE                     0b0011
#define GPIO_OUTPUT_OPEN_DRAIN_50MHZ_MODE                    0b0111





void MCAL_GPIO_void_SetPinMode(u8 copy_u8Port , u8 copy_u8Pin , u8 copy_u8Mode);
void MCAL_GPIO_void_SetPinValue(u8 copy_u8Port , u8 copy_u8Pin , u8 copy_u8Value);
u8 MCAL_GPIO_u8GetPinValue(u8 copy_u8Port , u8 copy_u8Pin);





#endif
