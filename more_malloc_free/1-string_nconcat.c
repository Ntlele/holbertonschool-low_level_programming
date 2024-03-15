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

	for (i = 0; s1[i] != '\0' && len < n; ++i)
		len++;

	len += n;

	ptr = malloc(sizeof(char) * (len + 1));

	if (ptr == NULL)
	{
		printf("Space was not allocated\n");
		exit (0);
	}
	else
		printf("Space allocation succeded!\n\n");

	i = j = 0;

	for (sum = 0; s1[i] != '\0'; ++sum)
		ptr[sum] = s1[i++];

	for (; j < n && s2[j] != '\0'; ++j, ++sum)
		ptr[sum] = s2[j];

	ptr[sum] = '\0';
	return (ptr);
}
