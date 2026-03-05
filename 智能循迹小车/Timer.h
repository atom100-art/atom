#ifndef __TIMER_H_
#define __TIMER_H_

extern unsigned int PWMR;  //右轮占空比
extern unsigned int	PWML;  //左轮占空比
extern unsigned int	t;     //设定的比较值

void Timer0_Init();

#endif