#include "main.h"
/**
 *_abs - compute the absolute value of an integer
 *@c:parameter used as input
 *Return: int
 */
int _abs(int c)
{
	if (c >= 0)
	{
		return (c);
	}
	else
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
}
