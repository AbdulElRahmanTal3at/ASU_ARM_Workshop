#ifndef NVIC_PRIVATE_H
#define NVIC_PRIVATE_H

#define NVIC_BASE_ADDRESS  		 0xE000E100

#define NVIC_ISER0            	*((volatile u32 *)0xE000E100)
#define NVIC_ISER1				*((volatile u32 *)0xE000E100+0x004)
#define NVIC_ISER2				*((volatile u32 *)0xE000E100+0x008)


#define NVIC_ICER0            	*(((volatile u32 *)0xE000E100 + 0x080))
#define NVIC_ICER1            	*(((volatile u32 *)0xE000E100 + 0x084))
#define NVIC_ICER2            	*(((volatile u32 *)0xE000E100 + 0x088))

#define NVIC_ISPR0            	*(((volatile u32 *)0xE000E100 + 0x100))
#define NVIC_ISPR1            	*(((volatile u32 *)0xE000E100 + 0x104))
#define NVIC_ISPR2            	*(((volatile u32 *)0xE000E100 + 0x104))

#define NVIC_ICPR0            	*(((volatile u32 *)0xE000E100 + 0x180))
#define NVIC_ICPR1            	*(((volatile u32 *)0xE000E100 + 0x184))
#define NVIC_ICPR2            	*(((volatile u32 *)0xE000E100 + 0x188))

#define NVIC_IABR0            	*(((volatile u32 *)0xE000E100 + 0x200))
#define NVIC_IABR1            	*(((volatile u32 *)0xE000E100 + 0x204))
#define NVIC_IABR2            	*(((volatile u32 *)0xE000E100 + 0x208))

#define NVIC_ICER0            	*(((volatile u32 *)0xE000E100 + 0x080))
#define NVIC_ICER1            	*(((volatile u32 *)0xE000E100 + 0x084))
#define NVIC_ICER2            	*(((volatile u32 *)0xE000E100 + 0x088))


#endif







