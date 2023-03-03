# include "maiin.h"

/**
 * _strcmp- compare strings
 * @s1:input
 * @s2:input
 * Return: the strings difference
 */
int _strcmp(char *s1, char *s2)
{
	int compare;

	compare = 0;

	compare = s1[0] - s2[0];

	return (compare);
}
