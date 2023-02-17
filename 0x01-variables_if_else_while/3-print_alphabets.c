#include <stdio.h>
/**
 * main - intry point
 *
 * Return: 0(success)
 */
int main(void)
{
	char a;
	char A;

	a = 'a';
	A = 'A';

	while (a <= 'z')
	{
		putchar(a);

		a = a + 1;
	}
	while (A <= 'Z')
	{
		putchar(A);

		A = A + 1;
	}
	putchar('\n');
	return (0);
}
