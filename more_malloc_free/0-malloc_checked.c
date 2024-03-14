#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory
 * @b: size of memory
 * return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *arr;

	arr = malloc(b);
	if (arr == NULL)
		exit(98);
	return (arr);
}
