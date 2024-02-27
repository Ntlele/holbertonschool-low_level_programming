#include "main.h"

/**
 * print_square - prints out a square
 * @size: the size of the square
 *
 * Return: void
 */

void print_square(int size)
{
	int h, w;

	w = 0;
	h = 0;

	if (size <= 0)
		_putchar('\n');
	else
		while (h < size)
		{
			while (w < size)
			{
				_putchar('#');
				w++;
			}
			_putchar('\n');
			h++;
		}
}
