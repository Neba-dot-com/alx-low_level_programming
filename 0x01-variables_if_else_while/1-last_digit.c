#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 *main- A main program to compute the last digit
 *description : get a random and print number
 *Return: 0(success)
 */
int main(void)
{
	int n;
	int l_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l_digit = n % 10;

	if (l_digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, l_digit);
	}
	else if (l_digit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, l_digit);
	}
	else if (l_digit < 6 && l_digit != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l_digit);
	}
	return (0);
}
