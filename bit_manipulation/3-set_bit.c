#include "main.h"

/**
 * set_bit - set value of bit to index position
 * @n: pointer to bit
 * @index: position of bit
 *
 * Return: return 1 if it works or -1 if it does not
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	i = 1 << index;

	*n = *n | mask;

	return (1);

}
