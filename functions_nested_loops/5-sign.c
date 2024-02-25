#include "main.h"
/**
 * print_sign - prints + if number is possitive or - if the number is negative 
 * @n: the character to test
 *
 * Return: + if n is possitive, 0 if n is 0, -1 if its negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (+1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
