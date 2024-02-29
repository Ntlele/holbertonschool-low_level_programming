#include "main.h"

/**
 * print_rev - returns a string in reverse
 * @s: charactor array string
 * Definition: prints a char string in reverse
 */

void print_rev(char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; c++)
		;

	for (c--; c >= 0; c--)
		_putchar(s[c]);
	_putchar('\n');
}
