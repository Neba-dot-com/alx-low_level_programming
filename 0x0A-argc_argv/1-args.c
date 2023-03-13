#include <stdio.h>
#include <string.h>
/**
 * main - a program that prints the number of arguments passed into it.
 * @argc:arrgument counter
 * @argv:array of string
 * Return: 0(success);
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%i\n", argc - 1);
	return (0);
}
