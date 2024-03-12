#include "main.h"
#include  <stdio.h>

/**
 *
 *
 *
 */

int **alloc_grid(int width, int heigh)
{
	if (width <= 0 || height <= 0)
	{
	return NULL;
	}

  // Allocate memory for an array of pointers to int arrays
	int **arr = (int**)malloc(height * sizeof(int*));
		if (arr == NULL)
		{
			return NULL;
		}

  // Allocate memory for each row of the 2D array
	for (int i = 0; i < height; i++)
	{
		arr[i] = (int*)malloc(width * sizeof(int));
		if (arr[i] == NULL)
		{
      // Free previously allocated rows if allocation fails here
			for (int j = 0; j < i; j++)
				free(arr[j]);
		}
		free(arr);
		return NULL;
	}
	return arr;
}
