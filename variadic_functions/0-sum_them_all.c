#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - returns sum of all parameters
 * @n: constant integer
 *
 * return: sum of parameters, 0 otherwise
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	va_start(args, count);

	int i, sum = 0;

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i <= n; i++)
	{
		int x = va_arg(args, int);
		sum += x;
	}
	va_end(args);
	return (sum);
}
