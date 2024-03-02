#include "main.h"

/**
 * _strncpy - a function that copies a string
 * @dest: destination
 * @src source
 *
 * Return: the copied string stored in the dest variable
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\n';
		i++;
	}
	return (dest);
}
