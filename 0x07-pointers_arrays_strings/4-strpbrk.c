#include "main.h"
/**
 * _strpbrk- a function tha searches a string
 * @s: array
 * @accept:input
 * Return: char
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}

