#include "main.h"
/**
 * print_diagonal - a function that drows a diagonal line on the terminal
 * @n:input
 * Return: void
 */
void print_diagonal(int n)
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
			while (j < i)
			{
				_putchar(32);
				j++;
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}

