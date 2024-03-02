#include "main.h"

/**
 * _strlen - returns the length of the string
 * @s: stores the string value
 * Returns: returns d which stores lenght of a string
 *
 */

int _strlen(char *s)
{
	int d;

	for (d = 0; s[d] != '\0'; d++)
		;
	return (d);
}
