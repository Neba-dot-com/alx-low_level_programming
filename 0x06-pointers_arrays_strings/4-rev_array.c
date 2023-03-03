#include "main.h"
#include <stdio.h>
/**
 * reverse_array- reverse array
 * @n:input
 * @a:input
 * Return:void
 */
void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
