#ifndef MAIN_H
#define MAIN_H

/**
 * create_array - function that creates an array
 * @size: size of the array
 * @c: The specific char to intialize the array with.
 *
 * Return: If size == 0 or the function fails - NULL.
 * Otherwise - a pointer to the array.
 */
char *create_array(unsigned int size, char c);

/**
 * _strdup - Returns a pointer to a newly-allocated space in memory
 * containing a copy of the string given as parameter.
 * @str: The string to be copied.
 *
 * Return: If str == NULL or insufficient memory is available - NULL.
 * Otherwise - a pointer to the duplicated string.
 */
char *_strdup(char *str);

/**
 * _strlen - return the length of a string
 * @s: char type pointer
 *
 * Return: length of string
 */
int _strlen(char *s);

/**
 * _strncat - funtion that concatenates strings
 * @dest: first string
 * @src: second string
 * @n: value of bytes in a string
 * Return: dest value
 */
char *_strncat(char *dest, char *src, int n);

/**
 * str_concat - allocates space for string value
 * @s1: pointer to destination of string
 * @s2: pointer to source of string
 * Return: pointer to copy of string
 */
char *str_concat(char *s1, char *s2);

/**
 * alloc_grid - function that returns pointer to 2D array
 * @width: the columns of the array
 * @height: the rows of the array
 * Returns: pointer to a 2d array
 * Description: returns a pointer to a 2 dimensional array
 */

int **alloc_grid(int width, int height);
#endif
