#include <stdio.h>
#include <stdlib.h>

/**
 *main- a function print a random number
 * Return: 0(success)
 */
int main(void)
{
	srand((unsigned int) time());
	printf("%d\n", rand());

	return (0);
}
