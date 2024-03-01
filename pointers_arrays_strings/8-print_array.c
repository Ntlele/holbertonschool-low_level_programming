#include <stdio.h>
#include "main.h"

/**
 * print_array - function that prints n elements of an array of integers,
 * followed by a new line.
 * @a: This is the input array
 * @n: This is the lenght of the array
 *
 *
 */

void print_array(int *a, int n)
{
	int ai;

	for (ai = 0; ai < n; ai++)
	{
		printf("%d", a[ai]);
		if (ai != (n - 1))
		{
			printf(", ");
		}
	}
	putchar('\n');
}
