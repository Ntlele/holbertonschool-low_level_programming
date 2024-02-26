#include "main.h"
/**
 * print_line - function that prints a line
 * @n: number of times to print
 * Returns: void
 *
 */

void print_line(int n)
{
	int _times;

	if (n > 0)
	{
		for (_times = 0; _times < n; _times++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
