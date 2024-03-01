#ifndef MAIN_H
#define MAIN_H
/**
 * reset_to_98 - updates an int pointer to 98
 * @*n: stores the value of a pointer
 *
 */
void reset_to_98(int *n);

/**
 * swap_int - swaps two integers
 * @a: first integer
 * @b: second integer
 *
 */
void swap_int(int *a, int *b);

/**
 * _strlen - returns the length of the string
 * @s: stores the value of string
 * Returns: the length of the string
 */
int _string(char *s);

/**
 * _puts - prints a string
 * @str: stores the charactor array string
 *
 */
void _puts(char *str);

/**
 * _putchar - prints out a variable
 *
 */
int _putchar(char c);

/**
 * print_rev - prints a string in reverse
 * @s: stores the string value pointer
 *
 */
void print_rev(char *s);

/**
 * rev_string - prints a string normaly and in reverse
 * @s: stores a string pointer
 *
 */
void rev_string(char *s);

/**
 * puts2 - prints char of string
 * @str: stores the char array string
 *
 */
void put2(char *str);

/*
 * puts_half - prints half of the string
 * @str: poiter of the char type string
 *
 */
void puts_half(char *str);
#endif
