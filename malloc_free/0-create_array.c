#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array
 * @size: size of the array
 * @c:
 *
 * Return: NULL if size is zero, else, pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	int i;

	while (i < size)
	{
		char *pntr = (char *)malloc(i * sizeof(char));

		if (size == 0)
			return ('NULL');
		else
			return (pntr);

	}
}
