#include "main.h"

/**
 * _strchr - funtion that locates a string
 * @s: the main string
 * @c: derived charactor
 * Return: a specific charactor or Null if charactor not found
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i++])
	{
		if (s[i] == c)
			return (s + i);
	} 
	return (0);
}
