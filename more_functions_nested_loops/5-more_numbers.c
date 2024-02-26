#include "main.h"
/**
 * more__numbers - prints whole numbers for 0 to 9 ten times
 * _putchar - prints out the numbers
 *
 * Return: void
 */

void print_numbers(void)
{
	int r, i, p;

	for (r = 0; r <= 9; r++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i > 9)
			{
				p = i / 10;
				_putchar(p + 0);
			}
			_putchar(i % 10 + 0);
		}
		_putchar('\n');
	}
}
