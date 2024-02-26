#include "main.h"
/**
 * more_numbers - prints whole numbers from 0 to 14 ten times
 * _putchar - prints out the numbers
 *
 * Return: void
 */

void more_numbers(void)
{
	int r, i, p;

	for (r = 0; r <= 9; r++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i > 9)
			{
				p = i / 10;
				_putchar(p + '0');
			}
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}
