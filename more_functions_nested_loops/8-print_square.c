#include "main.h"

/**
 * print_square - print a square
 * @size: stores the size of square
 * Description: should only use '#' to print square.
 */
void print_square(int size)
{
	int w, h;

	y = 0;

	if (size < 1)
		_putchar('\n');

	while (h < size)
	{
		w = 0;
		while (w < size)
		{
			_putchar('#');
			w++;
		}
		_putchar('\n');
		h++;
	}
}
