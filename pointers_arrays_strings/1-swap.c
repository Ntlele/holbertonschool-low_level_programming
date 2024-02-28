#include "main.h"

/**
 * swap_int - swaps integers
 * @a: first int variable
 * @b: second int variable
 * Returns: void
 *
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
