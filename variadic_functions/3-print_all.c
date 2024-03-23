#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_int - prints all integers
 * @args: list of arguments
 *
 * return: void
 */
void print_int(va_list args)
{
	int i = va_arg(args, int);

	printf("%d", i);
}

/**
 * print_char - prints all charactor arguments
 * @args: list of arguments
 *
 * return: void
 */

void print_char(va_list args)
{
	char c = va_arg(args, int);

	printf("%c", c);
}

/**
 * print_float - prints all float arguments
 * @args: list of arguments
 *
 * return: void
 */

void print_float(va_list args)
{
	float f = va_arg(args, double);

	printf("%f", f);
}

/**
 * print_string - prints all string arguments
 * @args: list of arguments
 *
 * return: void
 */

void print_string(va_list args)
{
	char *s = va_arg(args, char *);

	if (s == NULL)
		printf("(nil)");

	printf("%s", s);
}

/**
 * print_all - prints arguments of all types
 * @format: data type
 *
 * return: void
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0, j = 0;
	char *separator = "";
	func_printer func[] =
	{
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(ap, format);

	while (format && format[i])
	{
		while(j < 4 && (format[i] != *(func[j].symbol)))
			j++;
		if (j < 4)
		{
			printf("%s", separator);
			func[j].print_func(ap);
			separator = ", ";
		}
		i++;
	}
	printf("\n");

	va_end(ap);
}
