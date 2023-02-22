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
		_putchar(c);
		return (1);
	}
	else
	{
		int n;
		n = _putchar(45);
		c = c * n;
		_putchar(c);
		return (1);
	}
}
