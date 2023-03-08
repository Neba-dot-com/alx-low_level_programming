#include "main.h"
#include <stdbool.h>
bool isPrime(int n, int i);

/**
 * is_prime_number-check if it is prime ot not
 * @n:input number
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	if (isPrime(n, 2))
	{
		return (1);
	}
	return (0);
}

/**
 * isPrime- check if it is prime
 * @n:input number
 * @i:starting number
 * Return: boolean
 */
bool isPrime(int n, int i)
{
	if (n <= 2)
	{
		if (n == 2)
		{
			return (true);
		}
		return (false);
	}
	if (n % i == 0)
	{
		return (false);
	}
	if ((i * i) > n)
	{
		return (true);
	}
	return (isPrime(n, i + 1));
}
