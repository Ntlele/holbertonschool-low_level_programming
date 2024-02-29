#include "main.h"

/**
 * rev_string - reverses a string
 * @s: stores a charactor array string
 * Definition: prints a char string normal and in reverse
 */

void rev_string(char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; c++)
		_putchar(s[c]);
		continue;
	_putchar('\n');

	for (c--; c >= 0; c--)
		_putchar(s[c]);
	_putchar('\n');
}
