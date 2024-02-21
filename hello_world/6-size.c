#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main()
{
	printf("Size of a char: %ld\n", sizeof(char));
	printf("Size of a int: %ld\n", sizeof(int));
	printf("Size of a long int: %lu\n", sizeof(long int));
	printf("Size of a long long int: %lu\n", sizeof(long long int));
	printf("Size of a float: %g\n", sizeof(float));
	return (0);
}
