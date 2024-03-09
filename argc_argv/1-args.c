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
	if (argc >= 0 && **argv)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
