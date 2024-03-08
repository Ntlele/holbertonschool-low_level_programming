#include "main.h"

/**
 * _put_recursion - print a string in recursion
 * @s: string to be printed 
 * Return: void
 *
 */

void _puts_recursion(char *s)
{
	if (s[0] != '\0')
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
