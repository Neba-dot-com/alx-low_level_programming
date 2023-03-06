#include "main.h"
/**
 * _strspn- a function that get the ne length of a prefix substring.
 * @s: a string
 * @accept: a prefix substring
 *Return: length
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;

	while (s[i] == accept[i])
	{
		i++;
	}
	return (i);
}
