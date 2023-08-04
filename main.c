#include "../MCAL-/RCC_interface.h"
#include "../MCAL-/GPIO_interface.h"


int main (void){

	RCC_voidEnableClock(AHB1_BUS,PIN0);
	RCC_voidInitSysClock(HSI_CLK,0,0,AHB_Pre2,0,0);
	
	DIO_voidSetPinMode(GPIOA_PORT,PIN5,MODE_OUTPUT);
	DIO_voidSetOutType(GPIOA_PORT,PIN5,OUTPUT_TYPE_PUSH_PULL);
	DIO_voidSetOutSpeed(GPIOA_PORT,PIN5,OUTPUT_MEDUIM_SPEED);
	DIO_voidSetPull(GPIOA_PORT,PIN5,PULL_UP);
	
	while(1){
		DIO_voidWriteDataOdr(GPIOA_PORT,PIN5,HIGH);
	}

}

	