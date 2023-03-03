#include "main.h"
/**
 * leet - a function that endode
 * @p:input
 * Return:char
 */
char *leet(char *p)
{
	int i;
	int j;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; p[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (p[i] == s1[i])
			{
				p[i] = s2[j];
			}
		}
	}
	return (p);
}
