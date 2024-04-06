#include "main.h"

/**
 * flip_bits - flips bits
 * @n: bit value
 * @m: flipped bit
 *
 * Return: returns a flipped bit
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}

	return (count);
}
