#include "main.h"
/*
 * _isupper - checks for uppercase characters
 * @c: stores characters
 *
 * Return: 1 if character is uppercase
 */

int  _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
