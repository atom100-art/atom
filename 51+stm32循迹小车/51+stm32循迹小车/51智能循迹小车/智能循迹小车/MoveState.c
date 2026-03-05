#include <REGX52.H>
#include "MoveState.h"
#include "Motordirver.h"

void CarGo()
{RightMotoForward();LeftMotoForward();}

void CarBack()
{RightMotoBack();LeftMotoBack();}
	
void CarRight()
{RightMotoStop();LeftMotoForward();}
	
void CarLeft()
{LeftMotoStop();RightMotoForward();}

void CarStop()
{RightMotoStop();LeftMotoStop();}
