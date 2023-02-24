#include <stdio.h>
#include <stdbool.h>
/**
 * main - print prime factor
 * isPrime - check if the number is prime
 * @number: input
 * Return: void
 */

bool isPrime(int number)
{
	int i;

	for (i = 2; i < number; i++)
	{
		if (number % i == 0)
		{
			return (false);
		}
	}
	return (true);
}
int main(void)
{
	long int number;
	int i;
	int max;

	number = 612852475143;
	max = 2;
	i = 2;

	while (number / i != 1)
	{
		if (number % i == 0)
		{
			number = number / i;
			if (isPrime(number) && ((number > i)) && (number > max))
			{
				max = number;
			}
			else
			{
				if (max < i)
				{
					if (isPrime(i))
					{
						max = i;
					}
				}
			}
		}
		else
		{
			i++;
		}
	}
	return (0);
}
