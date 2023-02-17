#include <stdio.h>
/**
 * main - A program that prints alphabet in reverse
 *
 * Return: 0(success0
 */
int main(void)
{
	char z;

	z = 'z';

	while (z >= 'a')
	{
		putchar(z);

		z = z - 1;
	}
	putchar('\n');
	return (0);
}
