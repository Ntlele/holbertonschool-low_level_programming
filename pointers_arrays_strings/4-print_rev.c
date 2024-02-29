#include "main.h"

/**
 * _print_rev - returns a string in reverse
 * @s: charactor array string
 * Definition: prints a char string in reverse
 */

void _print_rev(char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; c--)
		_putchar(s[c]);
	_putchar('\n');
}
