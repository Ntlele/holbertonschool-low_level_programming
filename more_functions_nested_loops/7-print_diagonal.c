#include "main.h"
/**
 * print_diagonal - draws a diagonal line
 * @n: number of times to print
 * Return: void
 *
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int _slsh, _spc;

		for (_spc = 0; _spc < n; _spc++)
		{
			for (_slsh = 0; _slsh < n; _slsh++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	if (n < 0)
		_putchar('\n');
}
