/*
 * software_timer.c
 *
 *  Created on: Oct 30, 2023
 *      Author: Quoc Viet
 */
#include "software_timer.h"

int timer1_counter_dot = 0;
int timer2_counter_7seg = 0;

int timer1_flag_dot = 0;
int timer2_flag_7seg = 0;
void setTimer1( int duration)
{
	timer1_counter_dot = duration;
	timer1_flag_dot = 0;
}
void setTimer2( int duration)
{
	timer2_counter_7seg = duration;
	timer2_flag_7seg = 0;
}
void timerRun()
{
	if ( timer1_counter_dot > 0)
	{
		timer1_counter_dot--;
		if ( timer1_counter_dot <= 0)
		{
			timer1_flag_dot = 1;
		}
	}
	if ( timer2_counter_7seg > 0)
		{
			timer2_counter_7seg--;
			if ( timer2_counter_7seg <= 0)
			{
				timer2_flag_7seg = 1;
			}
		}
}

