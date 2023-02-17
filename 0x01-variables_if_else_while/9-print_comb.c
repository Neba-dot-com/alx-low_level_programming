# include <stdio.h>
/**
 * main - intry point
 *
 * Return: 0(success)
 */
int main(void)
{
	int num;

	num = 0;

	while (num <= 9)
	{
		putchar(num + '0');
		if (num <= 8)
		{
			putchar(',');
		}
		else
		{
			putchar('$');
		}
		putchar(' ');
		num = num + 1;
	}
	return (0);
}
