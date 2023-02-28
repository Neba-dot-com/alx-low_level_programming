#include "main.h"
#include <stdio.h>

/**
 * print_array - print element of array
 * @a: array of input
 * @n:number of lements array
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", a[i]);
			if (i == n - 1)
			{
				_putchar('\n');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		for (i = 0; i > n; i--)
		{
			printf("%d", a[-i]);
			if (i == n + 1)
			{
				_putchar('\n');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
