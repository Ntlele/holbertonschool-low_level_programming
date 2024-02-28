#ifndef _MAIN_H_
#define _MAIN_H_

/**
 * _isupper - checks for uppercase characters
 * @c: character that is to be checked
 *
 */
int _isupper(int c);

/**
 * _isdigit - checks if data is digit
 * @c: variable to check
 *
 */
int _isdigit(int c);

/**
 * mul - prints product of two integers
 * @a: first integer
 * @b: second integer
 */
int mul(int a, int b);

/**
 * print_numbers - prints whole numbers from 0 to 9
 * Returns: void
 *
 */
void print_numbers(void);

/**
 * _putcar - prints out values stored in variables
 */
int _putchar(char c);

/**
 * print_most_numbers - prints whole numbers except 2 and 4
 * Returns: void
 *
 */
void print_most_numbers(void);

/**
 * more_numbers - prints out numbers from 0 to 14 ten times
 * Returns: void
 *
 */
void more_numbers(void);

/**
 * print_line - print underscore n times
 * @n: number of times to print
 * Return: void
 *
 */
void print_line(int n);

/**
 * print_diagonal - draws diagonal
 * @n: number of times to print
 * Return: void
 *
 */
void print_diagonal(int n);

/**
 * print_square - draws out a square
 * @size: stores the size of the square
 * Return: void
 *
 */
void print_square(int size);

/**
 * print_traingle - draws a triangle
 * @size: stores the size of the triangle
 * Return: void
 *
 */
void print_triangle(int size);
#endif
