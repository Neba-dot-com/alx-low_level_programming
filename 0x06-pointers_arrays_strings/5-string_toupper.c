#include "main.h"
/**
 * string_toupper - a function that changes all lowercase
 * @p:input
 * Return:char
 */
char *string_toupper(char *p)
{
	int i;

	i = 0;
	while (p[i] != '\0')
	{
		if (p[i] >= 'a' && p[i] <= 'z')
			p[i] =  p[i] - 32;
		i++;
	}
	return (p);
}
