#include "main.h"
/**
 *print_rev- a  function that print string in reverse
 * @s:a parameter
 * Return: void
 * _strlen - a function counter that count the length of string
 */
int _strlen(char *s);
void print_rev(char *s);
int _strlen(char *s)
{
	int counter;

	counter = 0;
	while (*s != '\0')
	{
		counter++;
		s++;
	}
	return (counter);
}
void print_rev(char *s)
{
	int counter;
	char *p;
	int i;

	counter = _strlen(s);
	*p = &s[counter - 1];

	for (i = 0; i < counter; i++)
	{
		_putchar(*p++);
	}
	_putchar('\n');
}
