#include "main.h"
/**
 * _strchr - a function that locates a charachter in a string
 * @s:a string
 * @c:first occurence character
 * Return: pointer
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (s);
}
