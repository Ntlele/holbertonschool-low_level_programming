#include "main.h"

/**
 * clear_bit - clears a bit at index position
 * @n: pointer to the bit
 * @index: position of bit
 *
 * Return: return 1 if it works or -1 if error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n = *n & ~i;
	return (1);
}
