#include "main.h"

/**
 * _memcpy - copies memory area src to dest in n bytes
 * @dest: paste locaion or destination
 * @src: memory area to by copied
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	char *takeoff = src;
	char *location = dest;

	for (; i < n; i++)
		location[i] = takeoff[i];

	return (dest);
}
