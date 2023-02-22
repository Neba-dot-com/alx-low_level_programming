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
		_putchar(',');
		_putchar(' ');
		_putchar(n);
	}
	else if (n == 0)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		_putchar('n');
	}
	else
	{
		_putchar('-');
		_putchar(',');
		_putchar(' ');
		_putchar('n');
	}
	return (0);
}
