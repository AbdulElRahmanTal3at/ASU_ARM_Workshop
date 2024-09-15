#ifndef NVIC_INTERFACE_H
#define NVIC_INTERFACE_H
typedef u8 IRQn_t ;

STD_ReturnType MCAL_NVIC_EnableIRQ(IRQn_t IRQn);
STD_ReturnType MCAL_NVIC_DisableIRQ(IRQn_t IRQn);
u32 MCAL_NVIC_GetPendingIRQ (IRQn_t IRQn);
STD_ReturnType MCAL_NVIC_SetPendingIRQ (IRQn_t IRQn);
STD_ReturnType MCAL_NVIC_ClearPendingIRQ (IRQn_t IRQn);
u32 MCAL_NVIC_GetActive (IRQn_t IRQn);
u32 MCAL_NVIC_GetPriority (IRQn_t IRQn);


#endif

