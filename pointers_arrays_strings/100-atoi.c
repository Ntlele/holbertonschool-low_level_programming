#include "main.h"

/**
 * _atio - a function that converts a sting in to an int type
 * @s: a string variable
 * Returns: an integer value
 *
 */
int _atoi(char *s)
{
	int result = 0;
	int int_sign = 1;
	int index = 0;

	if (s[0] == '-')
	{
		int_sign = -1;
		index++;
	}

	for (; s[index] != '\0'; ++index)
		result = (((result * 10) + s[index]) - '0');

	return (int_sign * result);
}
