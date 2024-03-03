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
int _strlen(char *s);

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

/**
 * print_array - prints n elements of an array of integers
 * @a: array pointer
 * @n: number of elements of an array
 *
 */
void print_array(int *a, int n);

/**
 * _strcpy - this is a function that returns a copied string
 * @dest: this variable stores copied string
 * @src: this variable copies the string
 *
 */
char *_strcpy(char *dest, char *src);

/**
 * _atoi - function that converts a string value to an int type value
 * @s: the string to be converted
 * Returns: int type value
 *
 */
int _atoi(char *s);

/**
 * _strcat - this script links two strings together into one string
 * @dest: this is the first string
 * @src: this is the second string
 * Returns: the concatenated strings
 */
char *_strcat(char *dest, char *src);

/**
 * _strncat -  a function that concatenates two strings
 * @dest: first string
 * @src: second string
 * @n: the value of bytes that a string amounts to
 * Returns: dest value
 * Description: src does not need to be null-terminated if it contains n
 */
char *_strncat(char *dest, char *srn, int n);

/**
 * _strncpy - copies the string  value of the src 
 * @dest: destination of the result
 * @src: source of the result
 *
 * Returns: the copied string stored in the dest variable
 *
 */
char *_strncpy(char *dest, char *src, int n);

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: the return value
 *
 */
int _strcmp(char *s1, char *s2);

/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n);

/**
 * string_toupper - change all lowercase to uppercase
 * @n: pointer
 *
 * Return: n
 */
char *string_toupper(char *n);

/**
 * cap_string - capitalizes all words of a string
 * @n: input value
 *
 *
 * Return: string
 */
char *cap_string(char *n);
#endif
