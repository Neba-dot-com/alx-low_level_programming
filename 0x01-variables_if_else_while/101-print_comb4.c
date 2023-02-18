#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0(success)
 */
int main(void)
{
	int i;
	int j;
	int k;

	i = 0;

	while (i <= 7)
	{
		j = 1;
		while (j <= 8)
		{
			k = 2;
			while (k <= 9)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
				if ((i == 7) && (j == 8) && (k == 9))
				{
					putchar('\n');
				}
				else
				{
					putchar(', ');
					putchar(' ');
				}
				k++;
			}

			j++;
		}

		i++;
	}

	return (0);
}

