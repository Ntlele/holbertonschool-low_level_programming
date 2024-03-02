#include "main.h"
#include <string.h>

/**
 * _strncat -  a function that concatenates two strings
 * @dest: first string
 * @src: second string
 * Returns: returns dest value
 * Description: src does not need to be null-terminated if it contains n
 */
char *_strncat(char *dest, char *src, int n)
{
	int p = strlen(dest);
	int q = 0;

	while (q < n && *src)
	{
		dest[p + q] = *src;
		src++;
		q++;
	}
	dest[p + q] = '\0';
	return (dest);
}

