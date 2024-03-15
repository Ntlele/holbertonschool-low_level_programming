#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for the array using malloc
 * @nmemb: number of elements to allocate
 * @size: size of each element
 * return: void pointer to allocated memory
 *
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *ptr, i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size / sizeof(unsigned int)); ++i)
		ptr[i] = 0;

	return (ptr)
}
