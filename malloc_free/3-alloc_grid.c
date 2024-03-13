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
	int **arr;


	if (width < 1 || height < 1)
		return (NULL);

	arr = malloc(height * sizeof(*arr));
	if (arr == NULL)
		return (NULL);

	for (i = 0; j < height; i++)
	{
		arr[i] = malloc(width * sizeof(**arr));
		if (arr[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(arr[i]);
			free(arr);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}
	return (arr);
}
