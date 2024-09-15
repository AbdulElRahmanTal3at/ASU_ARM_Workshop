#include "STD_TYPES.h"
#include "BIT_math.h"


#include "NVIC_interface.h"
#include "NVIC_config.h"
#include "NVIC_private.h"

STD_ReturnType MCAL_NVIC_EnableIRQ(IRQn_t IRQn){
	STD_ReturnType ret = E_NOK;
	if(IRQn  < MAX_NUMBER_INTERRUPTS){
		if(IRQn < 32){
			SET_BIT(NVIC_ISER0,IRQn);
			ret = E_OK;
		}
		else if (IRQn < 64){
			IRQn -=32;
			SET_BIT(NVIC_ISER1,IRQn);
			ret = E_OK;
		}
		else if (IRQn < MAX_NUMBER_INTERRUPTS){
			IRQn -=64 ;
			SET_BIT(NVIC_ISER2,IRQn);
			ret = E_OK;

		}
		else{

		}
	}
	else{
		ret = E_NOK ;
	}
	return ret ;
}
STD_ReturnType MCAL_NVIC_DisableIRQ(IRQn_t IRQn){
	STD_ReturnType ret = E_NOK ;
	if(IRQn  < MAX_NUMBER_INTERRUPTS){
			if(IRQn < 32){
				CLEAR_BIT(NVIC_ICER0,IRQn);
				ret = E_OK;
			}
			else if (IRQn < 64){
				IRQn -=32;
				CLEAR_BIT(NVIC_ICER1,IRQn);
				ret = E_OK;
			}
			else if (IRQn < MAX_NUMBER_INTERRUPTS){
				IRQn -=64 ;
				CLEAR_BIT(NVIC_ICER2,IRQn);
				ret = E_OK;
			}
			else{

			}
		}
		else{
			ret = E_NOK ;
		}
	return ret ;
}
u32 MCAL_NVIC_GetPendingIRQ (IRQn_t IRQn){

}
STD_ReturnType MCAL_NVIC_SetPendingIRQ (IRQn_t IRQn){
	STD_ReturnType ret = E_NOK ;
		if(IRQn < MAX_NUMBER_INTERRUPTS){
			if(IRQn < 32){
				SET_BIT(NVIC_ISPR0,IRQn);
				ret = E_OK ;
			}
			else if(IRQn < 64){
				SET_BIT(NVIC_ISPR1,IRQn-32);
				ret = E_OK ;
			}
			else if(IRQn < MAX_NUMBER_INTERRUPTS){
				SET_BIT(NVIC_ISPR2,IRQn-64);
				ret = E_OK ;
			}
		}
		else{
			ret = E_NOK ;
		}
		return ret ;
}
STD_ReturnType MCAL_NVIC_ClearPendingIRQ (IRQn_t IRQn){
	STD_ReturnType ret = E_NOK ;
		if(IRQn < MAX_NUMBER_INTERRUPTS){
			if(IRQn < 32){
				SET_BIT(NVIC_ICPR0,IRQn);
				ret = E_OK ;
			}
			else if(IRQn < 64){
				SET_BIT(NVIC_ICPR1,IRQn-32);
				ret = E_OK ;
			}
			else if(IRQn < MAX_NUMBER_INTERRUPTS){
				SET_BIT(NVIC_ICPR2,IRQn-64);
				ret = E_OK ;
			}
		}
		else{
			ret = E_NOK ;
		}
		return ret ;
}
u32 MCAL_NVIC_GetActive (IRQn_t IRQn){

}

