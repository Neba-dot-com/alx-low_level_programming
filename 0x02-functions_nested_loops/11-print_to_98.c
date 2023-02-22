#include "main.c"
/**
 * print_to_98 - a program that prints upto 98
 * @n: a parameter used as input
 * Return: void
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			if (n == 98)
			{
				printf("%d", n);
				putchar('\n');
			}
			else
			{
				printf("%d", n);
				putchar(',');
				putchar(' ');
			}
			n++;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			if (n == 98)
			{
				printf("%d", n);
				putchar('\n');
			}
			else
			{
				printf("%d", n);
				putchar(',');
				putchar(' ');
			}
		}
	}
	else
	{
		printf("%d", n);
		putchar('\n');
	}
}
