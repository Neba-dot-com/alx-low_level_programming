#include "main.h"
/**
 *fizzBuzz - fizz buzz test
 *
 * Return: empty
 */
void fizzBuzz(void)
{
	int i;

	i = 0;
	while (i <= 100)
	{
		if ((i % 5) == 0 && (i % 3) == 0)
		{
			printf("FizzBuzz");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz");
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", i);
		}
		printf(" ");
		i++;
	}
	printf("\n");
}
