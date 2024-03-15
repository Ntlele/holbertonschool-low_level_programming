#ifndef MAIN_H
#define MAIN_H

/**
 * malloc_checked - function that allocates memory
 * @b: size of memory
 * return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b);

/**
 * string_nconcat - functuion that concatenates two strings into one
 * @s1: first string (destination)
 * @s2: second string (source)
 * return: pointer to the string space or NULL if fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n);

/**
 * _calloc - allocates memory for the array using malloc
 * @nmemb: number of elements to allocate
 * @size: size of each element
 * return: void pointer to allocated memory
 *
 */

void *_calloc(unsigned int nmemb, unsigned int size);
#endif
