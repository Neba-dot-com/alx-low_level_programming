#include "main.h"
/**
 * _memcpy- a function that copies memeory area
 * @dest:destination array
 * @src: source of memory area
 * @n: copies of n bytes
 * Return:copied destination array
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
