#include "main.h"

/**
 * _puts - prints out a string
 * @str: charactor array string
 *
 */

void _puts(char *str)
{
	int c;

	for (c = 0; str[c] != '\0'; c++)
		_putchar(str[c]);
	_putchar('\n');
}
