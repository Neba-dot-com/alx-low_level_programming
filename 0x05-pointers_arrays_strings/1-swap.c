#include "main.h"
/**
 * swap_int- a function that swwaps the value of two integers
 * @a:a parameter as imput
 * @b: a parameter as input
 * Return: void
 */
void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
