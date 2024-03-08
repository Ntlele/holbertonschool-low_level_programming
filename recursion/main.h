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
#endif
