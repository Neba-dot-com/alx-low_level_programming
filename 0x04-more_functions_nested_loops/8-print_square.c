#include "main.h"
/**
 * print_square - a function that print square
 * @size: input
 * Return: void
 */
void print_square(int size)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		i = 0;

		while (i < n)
		{
			j = 0;
			while (j < n)
			{
				_putchar('*');
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
}
