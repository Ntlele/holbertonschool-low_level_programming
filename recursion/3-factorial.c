#include "main.h"

/**
 * factorial - prints the factorial of a given integer
 * @n: integer
 * Return: factorial of a given integer
 */

int factorial(int n)
{
	if (n <= 1)
		return (0);
	if (n > 1)
		return (factorial(n - 1));
}
