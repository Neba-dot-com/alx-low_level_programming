#include "main.h"

/**
 * _strncpy-a function that copies a string
 * @dest: destination array
 * @src:source array
 * @n:number of chars
 * Return:char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
	}
	while (j < n)
	{
		dest[j] = '\0';
	}
}
