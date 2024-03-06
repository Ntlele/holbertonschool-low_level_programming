#include "main.h"

/**
 * _strstr - function that locates a subscript
 * @haystack: string that contains the subscript
 * @needle: subscript derived from the string
 * Return: pointer to thew beginning of the subscript or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return ('\0');
}
