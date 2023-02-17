#include <stdio.h>
/**
 * main - A program prints all the nubers of base 16 i lowercase
 *
 * Return: 0(success)
 */
int main(void)
{
	int num;
	char c;

	c = 'a';
	num = 0;

	while (num < 10)
	{
		putchar(num + '0');

		num = num + 1;
	}
	while (c <= 'f')
	{
		putchar(c);
		c = c + 1;
	}
	putchar('\n');
	return (0);
}
