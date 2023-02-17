#include <stdio.h>
/**
 * main - A program tha prints digit
 *
 * Return: 0(success)
 */
int main(void)
{
	int num;

	num = 0;

	while (num < 10)
	{
		putchar(num);

		num = num + 1;
	}
	putchar('\n');
	return (0);
}
