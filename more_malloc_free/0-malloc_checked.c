#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * malloc_checked - function allocates memory
 * @b: parameter for value
 * Return: value to return
*/

void *malloc_checked(unsigned int b)
{
	unsigned int *arr;

	arr = malloc(b);
	if (arr == NULL)
		exit(98);
	return (arr);
}
