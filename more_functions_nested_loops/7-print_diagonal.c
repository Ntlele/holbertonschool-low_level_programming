#include "main.h"
/**
 * print_diagonal - draws a diagonal line
 * @n: number of times to print
 * Return: void
 *
 */
void print_diagonal(int n)
{
	int _slsh, _spc;

	if (n > 0)
	{
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
	else
		_putchar('\n');
}
