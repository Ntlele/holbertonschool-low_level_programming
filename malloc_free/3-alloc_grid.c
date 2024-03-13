#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - function that returns pointer to 2D array
 * @width: the columns of the array
 * @height: the rows of the array
 * Returns: pointer to a 2d array
 */

int **alloc_grid(int width, int height)
{
	int i, j;

	int **arr = (int**)malloc(height * sizeof(int*));

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		arr[i] = (int*)malloc(width * sizeof(int));
		if (arr[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(arr[j]);
		}
		free(arr);
		return (NULL);
	}
	return (arr);
}
