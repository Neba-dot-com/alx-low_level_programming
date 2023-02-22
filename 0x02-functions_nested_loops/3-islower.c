#include "main.h"
/**
 *int _islower - check  the alphabet if lowercase
 *@c: an input to check lowercase
 *Return: int
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
