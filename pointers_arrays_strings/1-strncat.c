#include "main.h"
#include <string.h>

/**
 * _strncat -  a function that concatenates two strings
 * @dest: first string
 * @src: second string
 * @n: value of bytes in a string to be concatenated
 * Returns: returns dest value
 * Description: src does not need to be null-terminated if it contains n
 */
char *_strncat(char *dest, char *src, int n)
{
	int p, q;

	p = 0;
	q = 0;

	while (dest[p] != '\0')
		p++;

	while (src[q] != '\0' && q < n)
	{
		dest[p] = src[q];
		p++;
		q++;
	}

	dest[p] = '\0';

	return (dest);
}
