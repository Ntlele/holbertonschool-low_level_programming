#include "main.h"

/**
 *_strcat - this script concatenates two strings
 *@dest: first string
 *@src: second string
 */

char *_strcat(char *dest, char *src)
{
	int clip_b = 0, i = 0;

	while (dest[i++])
		clip_b[i++];

	for (i = 0; src[i]; i++)
		dest[clip_b++] = src[i++];

	return (dest);
}
