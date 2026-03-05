#include "Delay.h"
void Delay(unsigned int xms)
{
	unsigned char i, j;
	while(xms--)
	{	i = 20;
	j = 113;
	do
	{
		while (--j);
	} while (--i);
}
}
