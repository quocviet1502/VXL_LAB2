/*
 * software_timer.c
 *
 *  Created on: Oct 5, 2023
 *      Author: Quoc Viet
 */

#include "software_timer.h"

int timer1_counter = 0;
int timer1_flag = 0;
int timer2_flag = 0;
void setTimer1( int duration)
{
	timer1_counter = duration;
	timer1_flag = 0;
}
void timerRun()
{
	if ( timer1_counter > 0)
	{
		timer1_counter--;
		if ( timer1_counter <= 0)
		{
			timer1_flag = 1;
		}
	}
}
void display7SEG( int num)
{
	if ( num == 0)
	{
		HAL_GPIO_WritePin( a_GPIO_Port, a_Pin , GPIO_PIN_RESET);
		HAL_GPIO_WritePin( b_GPIO_Port, b_Pin , GPIO_PIN_RESET);
		HAL_GPIO_WritePin( c_GPIO_Port, c_Pin , GPIO_PIN_RESET);
		HAL_GPIO_WritePin( d_GPIO_Port, d_Pin , GPIO_PIN_RESET);
		HAL_GPIO_WritePin( e_GPIO_Port, e_Pin , GPIO_PIN_RESET);
		HAL_GPIO_WritePin( f_GPIO_Port, f_Pin , GPIO_PIN_RESET);
		HAL_GPIO_WritePin( g_GPIO_Port, g_Pin , GPIO_PIN_SET);
	}
	else if ( num == 1)
	{
		HAL_GPIO_WritePin( a_GPIO_Port, a_Pin , GPIO_PIN_SET);
		HAL_GPIO_WritePin( b_GPIO_Port, b_Pin , GPIO_PIN_RESET);
		HAL_GPIO_WritePin( c_GPIO_Port, c_Pin , GPIO_PIN_RESET);
		HAL_GPIO_WritePin( d_GPIO_Port, d_Pin , GPIO_PIN_SET);
		HAL_GPIO_WritePin( e_GPIO_Port, e_Pin , GPIO_PIN_SET);
		HAL_GPIO_WritePin( f_GPIO_Port, f_Pin , GPIO_PIN_SET);
		HAL_GPIO_WritePin( g_GPIO_Port, g_Pin , GPIO_PIN_SET);
	}
	else if (num == 2)
	{
		HAL_GPIO_WritePin( a_GPIO_Port, a_Pin , GPIO_PIN_RESET);
		HAL_GPIO_WritePin( b_GPIO_Port, b_Pin , GPIO_PIN_RESET);
		HAL_GPIO_WritePin( c_GPIO_Port, c_Pin , GPIO_PIN_SET);
		HAL_GPIO_WritePin( d_GPIO_Port, d_Pin , GPIO_PIN_RESET);
		HAL_GPIO_WritePin( e_GPIO_Port, e_Pin , GPIO_PIN_RESET);
		HAL_GPIO_WritePin( f_GPIO_Port, f_Pin , GPIO_PIN_SET);
		HAL_GPIO_WritePin( g_GPIO_Port, g_Pin , GPIO_PIN_RESET);
	}
	else if ( num == 3)
	{
		HAL_GPIO_WritePin( a_GPIO_Port, a_Pin , GPIO_PIN_RESET);
		HAL_GPIO_WritePin( b_GPIO_Port, b_Pin , GPIO_PIN_RESET);
		HAL_GPIO_WritePin( c_GPIO_Port, c_Pin , GPIO_PIN_RESET);
		HAL_GPIO_WritePin( d_GPIO_Port, d_Pin , GPIO_PIN_RESET);
		HAL_GPIO_WritePin( e_GPIO_Port, e_Pin , GPIO_PIN_SET);
		HAL_GPIO_WritePin( f_GPIO_Port, f_Pin , GPIO_PIN_SET);
		HAL_GPIO_WritePin( g_GPIO_Port, g_Pin , GPIO_PIN_RESET);
	}
	else if ( num == 4)
	{
		HAL_GPIO_WritePin( a_GPIO_Port, a_Pin , GPIO_PIN_SET);
		HAL_GPIO_WritePin( b_GPIO_Port, b_Pin , GPIO_PIN_RESET);
		HAL_GPIO_WritePin( c_GPIO_Port, c_Pin , GPIO_PIN_RESET);
		HAL_GPIO_WritePin( d_GPIO_Port, d_Pin , GPIO_PIN_SET);
		HAL_GPIO_WritePin( e_GPIO_Port, e_Pin , GPIO_PIN_SET);
		HAL_GPIO_WritePin( f_GPIO_Port, f_Pin , GPIO_PIN_RESET);
		HAL_GPIO_WritePin( g_GPIO_Port, g_Pin , GPIO_PIN_RESET);
	}
	else if ( num == 5)
	{
		HAL_GPIO_WritePin( a_GPIO_Port, a_Pin , GPIO_PIN_RESET);
		HAL_GPIO_WritePin( b_GPIO_Port, b_Pin , GPIO_PIN_SET);
		HAL_GPIO_WritePin( c_GPIO_Port, c_Pin , GPIO_PIN_RESET);
		HAL_GPIO_WritePin( d_GPIO_Port, d_Pin , GPIO_PIN_RESET);
		HAL_GPIO_WritePin( e_GPIO_Port, e_Pin , GPIO_PIN_SET);
		HAL_GPIO_WritePin( f_GPIO_Port, f_Pin , GPIO_PIN_RESET);
		HAL_GPIO_WritePin( g_GPIO_Port, g_Pin , GPIO_PIN_RESET);
	}
	else if ( num == 6)
	{
		HAL_GPIO_WritePin( a_GPIO_Port, a_Pin , GPIO_PIN_RESET);
		HAL_GPIO_WritePin( b_GPIO_Port, b_Pin , GPIO_PIN_SET);
		HAL_GPIO_WritePin( c_GPIO_Port, c_Pin , GPIO_PIN_RESET);
		HAL_GPIO_WritePin( d_GPIO_Port, d_Pin , GPIO_PIN_RESET);
		HAL_GPIO_WritePin( e_GPIO_Port, e_Pin , GPIO_PIN_RESET);
		HAL_GPIO_WritePin( f_GPIO_Port, f_Pin , GPIO_PIN_RESET);
		HAL_GPIO_WritePin( g_GPIO_Port, g_Pin , GPIO_PIN_RESET);
	}
	else if ( num == 7)
	{
		HAL_GPIO_WritePin( a_GPIO_Port, a_Pin , GPIO_PIN_RESET);
		HAL_GPIO_WritePin( b_GPIO_Port, b_Pin , GPIO_PIN_RESET);
		HAL_GPIO_WritePin( c_GPIO_Port, c_Pin , GPIO_PIN_RESET);
		HAL_GPIO_WritePin( d_GPIO_Port, d_Pin , GPIO_PIN_SET);
		HAL_GPIO_WritePin( e_GPIO_Port, e_Pin , GPIO_PIN_SET);
		HAL_GPIO_WritePin( f_GPIO_Port, f_Pin , GPIO_PIN_SET);
		HAL_GPIO_WritePin( g_GPIO_Port, g_Pin , GPIO_PIN_SET);
	}
	else if( num == 8)
	{
		HAL_GPIO_WritePin( a_GPIO_Port, a_Pin , GPIO_PIN_RESET);
		HAL_GPIO_WritePin( b_GPIO_Port, b_Pin , GPIO_PIN_RESET);
		HAL_GPIO_WritePin( c_GPIO_Port, c_Pin , GPIO_PIN_RESET);
		HAL_GPIO_WritePin( d_GPIO_Port, d_Pin , GPIO_PIN_RESET);
		HAL_GPIO_WritePin( e_GPIO_Port, e_Pin , GPIO_PIN_RESET);
		HAL_GPIO_WritePin( f_GPIO_Port, f_Pin , GPIO_PIN_RESET);
		HAL_GPIO_WritePin( g_GPIO_Port, g_Pin , GPIO_PIN_RESET);
	}
	else if ( num == 9)
	{
		HAL_GPIO_WritePin( a_GPIO_Port, a_Pin , GPIO_PIN_RESET);
		HAL_GPIO_WritePin( b_GPIO_Port, b_Pin , GPIO_PIN_RESET);
		HAL_GPIO_WritePin( c_GPIO_Port, c_Pin , GPIO_PIN_RESET);
		HAL_GPIO_WritePin( d_GPIO_Port, d_Pin , GPIO_PIN_RESET);
		HAL_GPIO_WritePin( e_GPIO_Port, e_Pin , GPIO_PIN_SET);
		HAL_GPIO_WritePin( f_GPIO_Port, f_Pin , GPIO_PIN_RESET);
		HAL_GPIO_WritePin( g_GPIO_Port, g_Pin , GPIO_PIN_RESET);
	}
}
