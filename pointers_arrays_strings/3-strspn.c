#include "main.h"

/**
 * _strspn - function gets length of prefix substring
 * @s: initial segment location
 * @accept: number of bytes
 * Return: number of bytes in initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int p, i;

	i = 0;
	while (s[i] != '\0')
	{
		p = 0;
		while (accept[p] != '\0' && s[i] != accept[p])
			p++;
		if (accept[p] == '\0')
			return (i);
		i++;
	}
	return (i);
}
