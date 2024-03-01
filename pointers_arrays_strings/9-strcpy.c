#include "main.h"

/**
 * _strcpy - function that copies a string
 * @dest: This is a variable that carries the copied string
 * @src: This is the copying variable
 *
 * Return: This returns copy
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
