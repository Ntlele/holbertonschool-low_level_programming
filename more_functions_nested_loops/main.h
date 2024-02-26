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
#endif
