#include <stdio.h>
/**
 * main - A program that prints digit
 *
 * Return: 0(success)
 */
int main(void)
{
	int num;

	num = 0;

	while (num < 10)
	{
		printf("%d", num);

		num = num + 1;
	}
	printf("\n");
	return (0);
}
