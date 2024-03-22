#include "3-calc.h"
#include <stdlib.h>

/**
 * op_add - sum of two integers
 * @a: first integer
 * @b: second integer
 *
 * return: sum of two numbers
 */
int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - deference of two numbers
 * @a: first integer
 * @b: second integer
 *
 * return: deference of two numbers
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - product of two numbers
 * @a: first int
 * @b: second int
 *
 * return: product of two integers
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - dividend of two numbers
 * @a: first integer
 * @b: second integer
 *
 * return: dividend of two integers
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - remainder
 * @a: first integer
 * @b second integer
 *
 * return: remainder of two numbers
 */
int op_mod(int a, int b)
{
	return (a % b);
}
