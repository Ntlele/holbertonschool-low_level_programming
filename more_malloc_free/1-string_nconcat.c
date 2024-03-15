#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 * @n: number of
 * Return: pointer to allocated space
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j, len, sum;

	for (i = 0; s[i] != '\0' && len < n; ++i)
		len++;
	for (j = 0; s[j] != '\0' && len < n; ++j)
		len++;

	ptr = malloc(sizeof(char) * (len + 1));

	if (ptr == NULL)
	{
		printf("Space was not allocated\n");
		exit (0);
	}
	else
		printf("Space allocation succeded!\n\n");

	i = j = 0;

	for (sum = 0; sum < n; ++sum)
	{
		if (s1[i] != '\0')
			ptr[sum] = s1[i++];
		else if (s2[j] != '\0')
			ptr[sum] = s2[j++];
		else
			break;
	}
	ptr[sum] = '\0';
	return (ptr);
}
