#include "main.h"
/**
 *print_last_digit - A program tha prints the last digit of a number
 *
 * @c: a parameter used as an input
 *
 *Return: int
 */
int print_last_digit(int c)
{
	int n;

	n = c % 10;
	if (n < 0)
	{
		n = -1 * n;
		return (n);
	}
	else
	{
		return (n);
	}
}
