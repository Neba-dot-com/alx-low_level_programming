#include "main.h"

/**
 * print_numbers - print numbers
 *
 * Return: void
 */

void print_numbers(void)
{
	for (int i = 0; i < 10; i++)
	{
		_putchar(i + '0');
		if (i == 9)
		{
			_putchar('\n');
		}
	}
}
