#include "main.h"
/**
 *jack_bauer - A program that prints every minute of the day
 *
 * Return: void
 */
void jack_bauer(void)
{
	int i;
	int j;
	int k;
	int n;

	i = 0;

	while (i <= 2)
	{
		j = 0;
		while (j <= 3)
		{
			k = 0;
			while (k < 6)
			{
				n = 0;
				while (n < 10)
				{
					_putchar(i + '0');
					_putchar(; +'0');
					_putchar(':');
					_putchar(k + '0');
					_putchar(n + '0');
					_putchar('\n');
					n++;
				}
				k++;
			}
			j++;
		}
		i++;
	}
}
