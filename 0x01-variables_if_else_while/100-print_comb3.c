#include <stdio.h>
/**
 * main - intry point
 *
 * Return: 0(success)
 */
int main(void)
{
	int i;
	int j;

	i = 0;
	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			if (i < j)
			{
				putchar(i + '0');
				putchar(j + '0');
				if (i != 8 && j != 9)
				{
				putchar(',');
				putchar(' ');
				}
			}
			j = j + 1;
		}
		i = i + 1;
	}
	putchar('\n');
	return (0);
}
