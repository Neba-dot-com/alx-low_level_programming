#include "main.h"

/**
 * puts2 - a function that prints even numbers
 * @str: aparameter
 * * Return:void
 */
void puts2(char *str)
{
	int c = 0;
	int i;

	while (s[c] != '\0')
	{
	c++;
	}

	for (i = 0; i < c; i++)
	{
		if (s[i] % 2 == 0)
		{
			_putchar(s[i]);
		}
	}
	_putchar('\n');
}
