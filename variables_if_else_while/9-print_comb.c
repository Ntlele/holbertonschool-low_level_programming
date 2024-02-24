#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int cmb;

	while(cmb < 10)
	{
		putchar(cmb + '0');
		if (cmb < 9)
		{
			putchar(44);
			putchar(32);
		}
		cmb++;
	}
	putchar('\n');
	return (0);
}
