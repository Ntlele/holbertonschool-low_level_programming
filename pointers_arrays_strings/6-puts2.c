#include "main.h"

/**
 * _puts2 - prints out a string
 * @str: charactor array string
 *
 */

void _puts2(char *str)
{
	int c;
	char p;

	for (c = 0; str[c] != '\0'; c++)
		if (c % 2 == 0)
		{
			p = str[c];
			_putchar(p);
		}
	_putchar('\n');
}
