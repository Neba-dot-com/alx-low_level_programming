#include "main.h"
/**
 * _strspn- a function that get the ne length of a prefix substring.
 * @s: a string
 * @accept: a prefix substring
 *Return: length
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				i++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (i);
		}
		s++;
	}
	return (i);
}
