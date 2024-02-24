#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c, cnum;

	for (cnum = '0'; cnum <= '9'; ++cnum)
	{
		putchar(cnum);
	}
	for (c = 'a'; c <= 'f'; ++c)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
