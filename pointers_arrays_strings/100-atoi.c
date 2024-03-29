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

	do
	{
		if (*s == '-')
		{
			int_sign *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			result = (result * 10) + (*s - '0');
		}
		else if (result > 0)
			break;

	} while (*s++);

	return (result * int_sign);

}
