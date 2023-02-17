#include <stdio.h>
/**
 *main - A program that print a lowercase
 *
 * Return: 0(success)
 */
int main(void)
{
	char a;

	a = 'a';

	while (a <= 'z')
	{
		if (a != 'q' && a != 'e')
		{
			putchar(a);
		}
		a = a + 1;
	}
	return (0);
}
