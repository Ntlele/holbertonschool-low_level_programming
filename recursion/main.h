#ifndef MAIN_H
#define MAIN_H

/**
 * _puts_recursion - print a string in recursion
 * @s: string to be printed
 * Return: void
 *
 */

void _puts_recursion(char *s);

/**
 * _putchar - prints out variables
 * @c: charactor variable to be printed
 * Return: variable value
 *
 */
int _putchar(char c);

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: pointer to the string printed
 * Return: void
 *
 */

void _print_rev_recursion(char *s);

/**
 * _strlen_recursion - prints out the length of a string
 * @s: pointer to string
 * Return: length of the string
 *
 */

int _strlen_recursion(char *s);

/**
 * factorial - prints the factorial of a given integer
 * @n: integer
 * Return: factorial of a given integer
 */

int factorial(int n);

/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: base number.
 * @y: pow number.
 * Return: power number.
 */
int _pow_recursion(int x, int y);

/**
 * find_root - calculates i**i to check with n.
 * @n: base number.
 * @i: iterator number.
 * Return: i.
 */
int find_root(int n, int i);

/**
 * _sqrt_recursion - calculates the natural square root of n.
 * @n: base number.
 *
 * Return: the square root of n.
 */
int _sqrt_recursion(int n);

/**
 * find_multipliers - look for multipliers of n.
 * @n: base number.
 * @i: iterator number.
 * Return: 1 if n is prime, 0 otherwise.
 */
int find_multipliers(int n, int i);

/**
 * is_prime_number - check if n is prime
 * @n: base number.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_number(int n);
#endif
