#include "main.h"

/**
 * puts_half - prints half of the string
 * @str: stores the char type string
 *
 */
void puts_half(char *str)
{
	int p, q;
	char r;

	for (p = 0; str[p] != '\0'; p++)
	{
	}
	if (p % 2 == 0)
	{
		for ((q = p / 2); str[q] != '\0'; q++)
		{
			r = str[q];
			_putchar(r);
		}
	}
	else
        {
                for ((q = (p - 1) / 2); str[q] != '\0'; q++)
                {
                        r = str[q];
                        _putchar(r);
                }
        }
	_putchar('\n');
}
