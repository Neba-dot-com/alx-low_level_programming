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
	j = 0;
	while (i <= 9)
	{
		while (j <= 9)
		{
			if (i < j)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(',');
				putchar(' ');
			}
			j = j + 1;
		}
		i = i + 1;
	}
	putchar('\n');
	return (0);
}
