#include "main.h"

/**
 * cap_string - a function capitalize all wordes of a string
 * @p:input
 * Return: char
 */
char *cap_string(char *p)
{
	int i;

	i = 0;
	while (p[i] != '\0')
	{
		if (p[0] >= 'a' && p[0] <= 'z')
		{
			p[i] = p[i] - 32;
		}
		else if (p[i] == ' ' || p[i] == '.' || p[i] == '\t' || p[i] == '\n')
		{
			if (p[i + 1] >= 'a' && p[i + 1] <= 'z')
			{
				p[i + 1] = p[i + 1] - 32;
			}
		}
		else
		{
			p[i] = p[i];
		}
		i++;
	}
	return (p);
}
