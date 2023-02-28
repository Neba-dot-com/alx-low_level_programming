#include "main.h"
/**
 *print_rev- a  function that print string in reverse
 * @s:a parameter
 * Return: void
 */
void print_rev(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
	c++;
	}

	for (c -= 1; c >= 0; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}
