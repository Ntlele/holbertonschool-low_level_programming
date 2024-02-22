#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch,ach;

	for (ch = 'a'; ch <= 'z'; ++ch)
	{
		putchar(ch);
	}

	for (ach = 'A'; ach <= 'Z'; ++ach)
	{
		putchar(ach);
	}
	putchar('\n');
	return (0);
}
