#include "main.h"

uint16_t delay_count=0;
uint8_t Mode=0;
uint16_t Mode_count=0;
uint8_t Mode_new=0;

uint8_t Button_count=0;
uint8_t Button_state=0;

//------------------------------------------------------------------------------------------------
//Functsiu budet vyzyvat kazduy 1ms
//------------------------------------------------------------------------------------------------
void SysTick_Handler(void)
{
						if (delay_count > 0)
						{
							delay_count--;
						}
						//--------------------
						if (Mode_count > 0)
						{
							Mode_count--;
						}
						//----------------------
						//
						//----------------------
						if (BUTTON_READ()==1)
						{
												if (Button_count <5)
												{
													Button_count++;
												}
												
													else
													{
														Button_state=1;
													}
						}
						//---------------------------
								else
								{
										if (Button_count>0)
										{
											Button_count--;
										}
									
									else
										{
											Button_state=0;
										}
								}
						//--------------------------
}

//------------------------------------------------------------------------------------------------
//gdem poka delay count ne stanet raven nulyu
//------------------------------------------------------------------------------------------------
void delay_ms(uint16_t delay_temp)
{
	delay_count = delay_temp;
	while(delay_count) //gdem poka delay count ne stanet raven nulyu
	{
		
	}
}

//------------------------------------------------------------------------------------------------
//Podklyutchaem peremennuy i initsializiruyem systemnyi timer //1ms
//------------------------------------------------------------------------------------------------
int main (void)
	{
		
		LEDs_ini();
		Button_ini();
		SysTick_Config(SystemCoreClock/1000); //initsializiruyem systemnyi timer //1ms	
		Mode_count = DELAY;
		Mode=MODE_GREENSTM;
		//-------------------------------------------------------------------------------
		//vkluchenie i vykluchenie zelenogo dioda
		//---------------------------------------------------------------------------------
		while(1)
			{
				if (BUTTON_READ() == 1)
				{
					GREENSTM_ON();
				}
				else
				{
					GREENSTM_OFF();
				}
					
				/*	if (Mode == MODE_GREENSTM)
							{
								if (Mode_new ==1)
									{
										Mode_count = DELAY;
										Mode_new = 0;
										GREENSTM_ON();
									}

								if (Mode_count == 0)
									{
						
										GREENSTM_OFF();
										Mode = MODE_BLUE; // vkl rezhima 
										Mode_new =1;
									}
							}
//-----------------------------------------------------------
//	vkluchenie i vykluchenie golubogo dioda						
//-------------------------------------------------------------							
				else if (Mode == MODE_BLUE)
				{
					if (Mode_new ==1)
					{
						Mode_count = DELAY;
						Mode_new = 0;
						BLUE_ON();
					}
					
					if (Mode_count == 0)
					{
						BLUE_OFF();
						Mode = MODE_LOW_LED ;
						Mode_new = 1;
					}
				}
//------------------------------------------------------------------------
//vkluchenie i vykluchenie nizhnego zelenogo dioda
//------------------------------------------------------------------------
				else if (Mode == MODE_LOW_LED)
				{
					if (Mode_new ==1)
					{
						Mode_count = DELAY;
						Mode_new=0;
						LOW_LED_ON();
					}
					
					if (Mode_count == 0)
					{
						LOW_LED_OFF();
						Mode = MODE_HIGH_LED;
						Mode_new = 1;
					}
				}
				
//--------------------------------------------------------------------------------
//vkluchenie i vykluchenie verkhnego dioda
//--------------------------------------------------------------------------------
				else if (Mode == MODE_HIGH_LED)
				{
					if (Mode_new ==1)
					{
						Mode_count = DELAY;
						Mode_new = 0;
						HIGH_LED_ON();
					}
					
					if (Mode_count == 0)
					{	
						HIGH_LED_OFF();
						Mode = MODE_GREENSTM;
						Mode_new = 1;
					}
				}*/
			}
	}
