#include "main.h"
/**
 * print_numbers - prints whole numbers for 0 to 9
 * _putchar - prints out the numbers
 *
 * Return: wholenumbers
 */

int  print_numbers(void)
{
	for (int i = 0; i <= 9; i++)
	{
		_putchar("%d", i);
		i++;
	}
	return (0);
}
