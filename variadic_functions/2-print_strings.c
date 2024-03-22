#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - print arguments as strings
 * @separator: string bettween strings
 * @n: number of strings to print
 *
 * return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *s;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char*);
		if (s)
		{
			printf("%s", s);

		}
		else
			printf("(nil)");

		if (separator != NULL && (i < (n - 1)))
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
