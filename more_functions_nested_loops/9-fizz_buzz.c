#include <stdio.h>

/**
 */
int main()
{
	int num, r;
	
	for (num = 0; num <= 100; num++)
	{
		if(num % 3 == 0 && num % 5 == 0)
		{
			printf("FuzzBizz");
		}
		else if (num % 3 == 0)
		{
			printf("Fuzz");
		}
		else if (num % 5 == 0)
		{
			printf("Bizz");
		}
		else
		{
			printf("%d", num);
		}
		
	}
	return (0);
}
