#ifndef VAR_FUNC_H
#define VAR_FUNC_H
/**
 * sum_them_all - returns sum of all parameters
 * @n: constant integer
 *
 * return: sum of all parameters
 */

int sum_them_all(const unsigned int n, ...);

/**
 * print_numbers - prints mumbers
 * @n: number of integers to print
 * @separator: separates the numbers
 *
 * return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...);
#endif
