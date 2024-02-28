#include "main.h"

/**
 * print_triangle - print a triangle
 * @size: stores the size of triangle
 * Description: should only use '#' to print square.
 */
void print_triangle(int size)
{
	int w, h, b;

	h = 0;
	w = size - 1;
	while (h < size)
	{
		w = size - 1 - h;
		b = h + 1;
		while (w > 0)
		{
			_putchar(' ');
			w--;
		}
		while (b > 0)
		{
			_putchar('#');
			b--;
		}
		_putchar('\n');
		h++;
	}

	if (size <= 0)
		_putchar('\n');
}

