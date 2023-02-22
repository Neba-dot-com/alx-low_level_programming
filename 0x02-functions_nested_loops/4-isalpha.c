#include "main.h"
/**
 * _isalpha - check if it is a letter
 * @c: a parameter used as input
 * Return: int
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
