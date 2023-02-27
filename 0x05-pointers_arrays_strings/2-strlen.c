#include "main.h"
/**
 * _strlen- a function that returns the length of a string
 * @s: a paramater as char
 * Return: int
 */
int _strlen(char *s)
{
	int count;

	count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
