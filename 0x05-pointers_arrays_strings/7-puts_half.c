#include "main.h"

/**
 * puts_half - a function that prints half of a string
 * @str: a parameter as input
 * Return: void
 */
void puts_half(char *str)
{
	int c = 0;
	int i;

	while (str[c] != '\0')
	{
	c++;
	}

	if ((c % 2) == 0)
	{
		for (i = (c / 2); i < c; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = (c / 2) + 1; i < c; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
