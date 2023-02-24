#include "main.h"
/**
 * print_line - draws a strait line
 * @n: input
 * Return: void
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\\');
		_putchar('n');
	}
	else
	{
		for (i = 0; i < n; n++)
		{
			_putchar('_');
		}
		_putchar('\\');
		_putchar('n');
	}
	_putchar('\n');
}
