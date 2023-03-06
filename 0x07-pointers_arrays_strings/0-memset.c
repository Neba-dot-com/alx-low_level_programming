#include "main.h"
/**
 * _memset- a function that fills memory with a constant byte
 * @s:array input
 * @b: a constant bye to be filled
 * @n:number of bytes to be filedd
 * Return:filled array
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	_putchar('\n');
	return (s);
}
