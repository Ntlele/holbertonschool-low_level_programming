#include "main.h"

/**
 * _strcat - this script concatenates two strings
 * @dest: first string
 * @src: second string
 * Returns: returns dest value
 */

char *_strcat(char *dest, char *src)
{
	int p, i;

	i = 0;
	while (dest[i] != '\0')
		i++;

	p = 0;
	while (src[p] != '\0')
	{
		dest[i] = src[p];
		i++;
		p++;
	}
	dest[i] = '\0';
	return (dest);
}
