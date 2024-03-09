#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints out the number of arguments
 * @argc: store the number of programs
 * @argv: stores the names of programs
 * Return: always 0
 *
 */
int main(int argc, char *argv[])
{
	int i;
	int j;
	int result = 0;

	if (argc < 1)
	{
		printf("%d\n", 0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		result += atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
