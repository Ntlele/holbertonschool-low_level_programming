#include <stdio.h>

/**
 * main - prints out the number of arguments
 * @argc: store the number of programs
 * @argv: stores the names of programs
 * Return: always 0
 *
 */
int main(int argc, char* argv[])
{
	(void) argv;
	int sum;

	sum = argc - 1;
	printf("%d\n", sum);
	return (0);
}
