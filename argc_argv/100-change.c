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
	int i, coins = 0, cents = atoi(argv[1]), denominations[] = {25, 10, 5, 2, 1};

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	if (cents < 0)
	{
		printf("0\n");
		return 0;
	}

	for (i = 0; i < 5; i++)
	{
		while (cents >= denominations[i]) 
		{
			cents -= denominations[i];
			coins++;
		}
	}

	printf("%d\n", coins);
	return 0;
}
