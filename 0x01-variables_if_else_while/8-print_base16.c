#include <stdio.h>
/**
 * main - A program prints all the nubers of base 16 i lowercase
 *
 * Return: 0(success)
 */
int main(void)
{
	int num;

	num = 0;

	while (num <= 15)
	{
		puchar(num + '0x');

		num = num + 1;
	}
	putchar('\n');
	return (0);
}
