#include "main.h"
/**
 *print_sign - prints the sign of a number
 *
 *@n: a parameter as input
 *
 * Return: int
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar('1');
	}
	else if (n == 0)
	{
		_putchar('0');
		_putchar('0');
	}
	else
	{
		_putchar('-');
		_putchar('1');
	}
	return (0);
}
