#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char cnum;

	for (cnum = '0'; cnum <= '9'; ++cnum)
	{
		putchar(cnum);
	}
	putchar('\n');
	return (0);
}
