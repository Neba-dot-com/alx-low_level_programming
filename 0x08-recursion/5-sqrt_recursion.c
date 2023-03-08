#include "main.h"
#include <stdio.h>


int _sqrt(int n, int i);

/**
 *_sqrt_recursion-returns square root of number
 *@n: number to calculate the square root
 *
 * Return:the square root
 */
int _sqrt_recursion(int n)
{
	 _sqrt(n, 1);
}

/**
 * _sqrt-calculates the square root
 * @n: number to calculate the square root
 * @i: iterate number
 *
 * Return: the square root
 */
int _sqrt(int n, int i)
{
	i = i * i;

	if (i > n)
	{
		return (-1);
	}
	if (i == n)
	{
		return (i);
	}
	return (_sqrt(n, i + 1));
}
