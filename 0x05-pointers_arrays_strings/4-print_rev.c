#include "main.h"
/**
 *print_rev- a  function that print string in reverse
 * @s:a parameter
 * Return: void
 */
void print_rev(char *s)
{
	char rev;
	int counter;
	int i;

	rev = s[0];
	counter = 0;

	while (s[counter] != '\0')
	counter++;

		for (i = 0; i < counter; i++)
		{
			counter--;
			rev = s[i];
			s[i] = s[counter];
			s[counter] = rev;
		}
}
