#include "main.h"

/**
 * get_bit - returns the bit at index position
 * @n: bit value
 * @index: position integer
 *
 * Return: return bit value
 */

int get_bit(unsigned long int n, unsigned int index)
{

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	return ((n >> index) & 1);
}
