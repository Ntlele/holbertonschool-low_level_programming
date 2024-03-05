#include "main.h"

/**
 * _strspn - function gets length of prefix substring
 * @s: initial segment location
 * @accept: number of bytes
 * Return: number of bytes in initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	unsigned int n_bytes = 0;

	while (*s)
	{
		for (;accept[i]; i++)
		{
			if (accept[i] == *s)
			{
				n_bytes++;
				break;
			}
			else if ((accept[i + 1]) == '\0')
				return (n_bytes);
		}
		s++;
	}
	return (n_bytes);
}
