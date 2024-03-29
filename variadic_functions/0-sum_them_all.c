#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - returns sum of all parameters
 * @n: constant integer
 *
 * Return: sum
 * description: returns the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list args;

	va_start(args, n);

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		int x = va_arg(args, int);

		sum += x;
	}

	va_end(args);
	return (sum);
}
