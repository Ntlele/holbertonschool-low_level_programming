#include "calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * gert_op_func - gets
 * @s: s
 *
 * return: 0 if false, otherwise something else
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = 
	{
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod}
	};

	int i;
	i = 0;

	while (ops[i].op != NULL)
	{
		if (strcmp(ops[i].op, s) == 0)
		{
			return (ops[i].f);

		}

		i++;
	}
	printf("Error\n");
	exit(99);
}
