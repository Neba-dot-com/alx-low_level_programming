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

	while (a <= 'z' && A <= 'Z')
	{
		putchar(a);
		putchar(A);
		putchar('\n');

		a = a + 1;
		A = A + 1;
	}
	return (0);
}
