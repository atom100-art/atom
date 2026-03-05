//此函数为主函数，调用分块函数函数在此函数执行
#include <REGX52.H>
#include "MoveState.h"
#include "Motordirver.h"
#include "Timer.h"
#include "Infrared track.h"



void main()
{
	Timer0_Init();//	定时器0开关
	EA=1;					//	定时器中断总使能开关
	while(1)
	{
		Track();		//	循迹函数		
	}
}
