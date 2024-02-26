#include "main.h"
/**
 * _isdigit - checks if variable is a digit
 * @c: stores digit
 *
 * Return: 1 if variable is digit
 */

int  _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	return (0);
}
