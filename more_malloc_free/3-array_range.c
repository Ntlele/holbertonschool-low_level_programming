#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * return: pointer to allocated memory
 */

int *array_range(int min, int max)
{
	int *ptr, i, Def;

	Def = max - min;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * (Def + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		ptr[i] = min;
	return (ptr);
}
