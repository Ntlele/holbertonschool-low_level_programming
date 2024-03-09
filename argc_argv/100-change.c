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
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return 0;
	}

	int coins = 0;
	int denominations[] = {25, 10, 5, 2, 1};

	for (int i = 0; i < 5; i++)
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
