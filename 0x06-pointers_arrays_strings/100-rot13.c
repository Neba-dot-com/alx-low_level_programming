#include "main.h"
/**
 * rot13- rotate
 * @p:input
 * Return:char
 */
char *rot13(char *p)
{
	int i;
	int j;
	char s1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwzyz";
	char s2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwzyzabcdefghijklm";

	for (i = 0; p[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (p[i] == s1[j])
			{
				p[i] = s2[j];
				break;
			}
		}
	}
	return (p);
}
