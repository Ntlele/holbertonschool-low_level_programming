#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - function that returns pointer to 2D array
 * @width: the columns of the array
 * @height: the rows of the array
 * Returns: pointer to a 2d array
 * Description: returns a pointer to a 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int r, c, i;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = (int **)malloc(sizeof(*arr) * height);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		arr[i] = (int *)malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			while (i--)
			free(arr[i]);
			free(arr);
			return (NULL);
		}
	}
	for (r = 0; r < height; r++)
		for (c = 0; c < width; c++)
			arr[r][c] = 0;
	return (arr);
}
