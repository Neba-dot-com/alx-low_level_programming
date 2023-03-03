#include "main.h"
/**
 *_strncat- a function that concatenates two strings
 *@dest: destination array
 *@src:source array
 *@n: number of char
 *Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;
	int k;

	i = 0;

	while (dest[i])
	{
		i++;
	}

	j = 0;

	while (src[j])
	{
		j++;
	}
	if (n > j)
	{
		n = j;
	}
	for (k = 0; k < n; k++)
	{
		dest[i++] = src[k];
	}
	return (dest);
}
