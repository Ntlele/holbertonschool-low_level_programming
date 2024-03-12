#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>


/**
 * _strlen - return the length of a string
 * @s: char type pointer
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
		;
	return (i);
}

/**
 * _strncat - funtion that concatenates strings
 * @dest: first string
 * @src: second string
 * @n: value of bytes in a string
 * Return: dest value
 */
char *_strncat(char *dest, char *src, int n)
{
	int p, q;

	p = 0;
	q = 0;

	while (dest[p] != '\0')
	{
		p++;
	}
	while (src[q] != '\0' && q < n)
	{
		dest[p] = src[q];
		p++;
		q++;
	}
	dest[p] = '\0';

	return (dest);
}
/**
 * str_concat - allocates space for string value
 * @s1: pointer to destination of strin\
 * @s2: pointer to source of string
 * Return: pointer to copy of string
 */

char *str_concat(char *s1, char *s2)
{
	char *pntr;
	int sizef, sizes;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}
	
	sizef = _strlen(s1);
	sizes = _strlen(s2);

	pntr = malloc(((sizef + sizes) + 1) * sizeof(char));

	if (pntr == NULL)
	{
		return (NULL);
	}
	_strncat(pntr, s1, sizef);

	_strncat(pntr, s2, sizes);

	pntr += '\0';
	return (pntr);
}
