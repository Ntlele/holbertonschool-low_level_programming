#include "main.h"

/**
 * factorial - prints the factorial of a given integer
 * @n: integer
 * Return: factorial of a given integer
 */

int factorial(int n)
{
	if (n == 0 || n == 1)
		return (1);
	if (n > 1)
		return (n * factorial(n - 1));
	else
		return (-1);
}
