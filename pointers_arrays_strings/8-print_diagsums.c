#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of diagonals in square matrix
 * @a: array of integers
 * @size: determines that the square matrix
 * main: executeds the function
 */

void print_diagsums(int *a, int size)
{
	int index, sum1 = 0, sum2 = 0;

	for (index = 0; index < size; index++)
	{
		sum1 += a[index];
		a += size;
	}

	a -= size;

	for (index = 0; index < size; index++)
	{
		sum2 += a[index];
		a -= size;
	}

	printf("%d, %d\n", sum1, sum2);
}

int main(void)
{
	int c3[3][3] = {
        	{2, 2, 3},
        	{2, 3, 2},
        	{4, 2, 2},
    	};
    	int c5[5][5] = {
        	{2, 1, 5, 4, 2},
        	{1, 1, 2, 2, 1},
        	{4, 3, 2, 1, 4},
        	{4, 2, 3, 4, 2},
        	{2, 1, 5, 6, 5},
    	};

    	print_diagsums((int *)c3, 3);
    	print_diagsums((int *)c5, 5);

    	return (0);
}
