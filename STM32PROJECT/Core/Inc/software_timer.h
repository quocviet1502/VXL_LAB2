/*
 * software_timer.h
 *
 *  Created on: Oct 30, 2023
 *      Author: Quoc Viet
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer1_flag_dot;
extern int timer2_flag_7seg;

void setTimer1( int duration);
void setTimer2( int duration);
void timerRun();


void display7SEG( int num);


#endif /* INC_SOFTWARE_TIMER_H_ */
