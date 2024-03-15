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
	unsigned int i, j, len, len2, sum;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; ++i)
		len++;
	for (j = 0; s2[j] != '\0'; ++j)
                len2++;

	if (n >= len2)
		n = len2;

	ptr = malloc(sizeof(char) * (len + n + 1));

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
