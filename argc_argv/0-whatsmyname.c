#include <stdio.h>

/**
 * main - prints out the name of the program
 * @argc: store the number of programs
 * @argv: stores the names of programs
 * Return: always 0
 *
 */

int main(int argc, char *argv[])
{
	if (argc >= 0)
		printf("%s\n", argv[0]);
	return (0);
}
