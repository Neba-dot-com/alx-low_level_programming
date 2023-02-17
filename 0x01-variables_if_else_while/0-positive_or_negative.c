#include <stdio.h>
/**
 * main - A program tp print whether the number stored  is postive or negative
 * n - the variable will store a different vallue
 * Return: 0(seccess)
 */
int main(void)
{
	int n = 0;

	if (n > 0)
	{
		printf("%d is a positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
