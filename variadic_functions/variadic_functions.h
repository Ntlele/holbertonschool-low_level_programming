#ifndef VAR_FUNC_H
#define VAR_FUNC_H
#include <stdarg.h>
/**
 * sum_them_all - returns sum of all parameters
 * @n: constant integer
 *
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...);

/**
 * print_numbers - prints mumbers
 * @n: number of integers to print
 * @separator: separates the numbers
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...);

/**
 * print_strings - print arguments as strings
 * @separator: string bettween strings
 * @n: number of strings to print
 *
 * return: void
 */

void print_strings(const char *separator, const unsigned int n, ...);

/**
 * print_all - prints arguments of all types
 * @format: data type
 *
 * return: void
 */
void print_all(const char * const format, ...);

/**
 * struct print - A structure that defines our print type
 *
 * @symbol: a symbol representing the data type
 * @func_printer: a pointer prints data type according to symbol
 */

/**
 * print_func - gets functuions
 * @args: list
 *
 * return: void
 */
typedef struct print
{
	char *symbol;
	void (*print_func)(va_list args);
} func_printer;
#endif
