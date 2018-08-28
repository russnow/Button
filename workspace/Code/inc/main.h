#ifndef MAIN_H
#define MAIN_H

#include "mcu_ini.h"


#define GREENSTM_ON()		GPIO_SetBits(GPIOB, GPIO_Pin_7)
#define GREENSTM_OFF()	GPIO_ResetBits (GPIOB, GPIO_Pin_7)
#define BLUE_ON()				GPIO_SetBits(GPIOB, GPIO_Pin_6)
#define BLUE_OFF()			GPIO_ResetBits (GPIOB, GPIO_Pin_6)
#define HIGH_LED_ON()		GPIO_SetBits(GPIOB, GPIO_Pin_5)
#define HIGH_LED_OFF()	GPIO_ResetBits(GPIOB, GPIO_Pin_5)
#define LOW_LED_ON()		GPIO_SetBits(GPIOB, GPIO_Pin_4)
#define LOW_LED_OFF()		GPIO_ResetBits(GPIOB, GPIO_Pin_4)
#define DELAY						100 

//-------------------------------------------------------------
// Propisyvayem rezhimy miganiya diodov
//-------------------------------------------------------------

#define MODE_GREENSTM		0
#define MODE_BLUE				1
#define MODE_HIGH_LED		2
#define MODE_LOW_LED		3

//-------------------------------------------------------------
//Zadayom funkthiyu chteniya
//-------------------------------------------------------------

#define BUTTON_READ()			GPIO_ReadInputDataBit (GPIOA, GPIO_Pin_0)

#endif

