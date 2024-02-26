#include "main.h"
/**
 * print_numbers - prints whole numbers for 0 to 9
 * _putchar - prints out the numbers
 *
 * Return: wholenumbers
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i);
		i++;
	}
	_putchar("\n");
	return (0);
}
