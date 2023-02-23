#include "main.h"


/**
 *_isupper - a program that checkes for uppercase character
 *@c: a parameter as input
 *Return: int
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
