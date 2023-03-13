#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main-a program that prints its name, followed by a new line.
 * @argc: counter of argument
 * @argv:array of atring
 * Return: 0(success)
 */
int main(int argc, char *argv[])
{
	int i;
	int mul;

	if (argc == 3)
	{
		mul = 1;

		for (i = 1; i < argc; i++)
		{
			int x = strtol(argv[i], NULL, 10);

			mul = mul * x;
		}
		printf("%d\n", mul);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (0);
	}
}
