/*
 * software_timer.h
 *
 *  Created on: Nov 8, 2023
 *      Author: PC
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer0_flag;
extern int timer1_flag;
extern int timer2_flag;
extern int timer3_flag;
extern int timer4_flag;
extern int timer5_flag;
void setTimer0(int duration);
void setTimer1(int duration);
void setTimer2(int duration);
void setTimer3(int duration);
void setTimer4(int duration);
void setTimer5(int duration);
void timerRun();
void clearTimer0();
void clearTimer1();
void clearTimer2();
void clearTimer3();
void clearTimer4();
void clearTimer5();
#endif /* INC_SOFTWARE_TIMER_H_ */
