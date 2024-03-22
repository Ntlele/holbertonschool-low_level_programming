#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_numbers - prints mumbers
 * @n: number of integers to print
 * @separator: separates the numbers
 *
 * return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (i > 0 && separator)
		{
			printf("%s%i", separator,va_arg(args, int));

		}
		else
			print("%d", va_arg(args, int));

	}
	va_end(args);
	printf("\n");
}
