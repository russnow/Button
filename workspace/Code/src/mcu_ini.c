#include "mcu_ini.h"

//------------------------------------------------------------------------------------------------
//Zadayem peremennuy functsiu
//------------------------------------------------------------------------------------------------	
void LEDs_ini(void)
{
	GPIO_InitTypeDef GPIO_Init_LED;
		
		RCC_AHBPeriphClockCmd(RCC_AHBPeriph_GPIOB, ENABLE); //vkluchayet tactirovanie na portu B 
		
		
		
		GPIO_Init_LED.GPIO_Pin = GPIO_Pin_4 | GPIO_Pin_5 | GPIO_Pin_6 | GPIO_Pin_7;
		GPIO_Init_LED.GPIO_Mode = GPIO_Mode_OUT;
		GPIO_Init_LED.GPIO_Speed =  GPIO_Speed_2MHz;
		GPIO_Init_LED.GPIO_OType = GPIO_OType_PP;
		GPIO_Init_LED.GPIO_PuPd = GPIO_PuPd_NOPULL;
		GPIO_Init(GPIOB , &GPIO_Init_LED);
}
 
//---------------------------------------------------------------------------------------------------
//inithializiruyem cnopku podkluchayem registry
//---------------------------------------------------------------------------------------------------
void Button_ini (void)
{
	GPIO_InitTypeDef GPIO_Init_Button;
	
	RCC_AHBPeriphClockCmd (RCC_AHBPeriph_GPIOA, ENABLE);
	
	GPIO_Init_Button.GPIO_Pin = GPIO_Pin_0;
	GPIO_Init_Button.GPIO_Mode = GPIO_Mode_IN;
	GPIO_Init_Button.GPIO_Speed = GPIO_Speed_2MHz;
	GPIO_Init_Button.GPIO_OType = GPIO_OType_PP;
	GPIO_Init_Button.GPIO_PuPd = GPIO_PuPd_NOPULL;
	
	GPIO_Init(GPIOA, &GPIO_Init_Button);
}
	