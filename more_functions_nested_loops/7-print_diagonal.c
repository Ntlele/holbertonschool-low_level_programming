#include "main.h"
/**
 * print_diagonal - draws a diagonal line
 * @n: number of times to print
 * Return: void
 *
 */
void print_diagonal(int n)
{
	int slsh, sp;

	if (n <= 0)
		_putchar('\n');
	else
		for (sp = 0; sp < n; sp++)
		{
			for (slsh = 0; slsh < sp; slsh++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
}
