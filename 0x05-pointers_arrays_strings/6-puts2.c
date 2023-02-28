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

	while (str[c] != '\0')
	{
	c++;
	}

	for (i = 0; i < c; i++)
	{
		if (str[i] >= '0' && str[i] <= '9' && str[i] % 2 == 0)
		{
			_putchar(str[i]);
		}
		else if (str[i] >= '0' && str[i] <= '9' && str[i] % 2 != 0)
		{
			continue;
		}
		else
		{
			if ((i % 2) == 0)
			{
				_putchar(str[i]);
			}
		}
	}
	_putchar('\n');
}
