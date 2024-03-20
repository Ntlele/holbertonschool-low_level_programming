#include "calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *
 */

int (*get_op_func(char *s))(int, int)
{
	if (s != '+' || s != '*'|| s != '-'|| s != '/' || s != %)
	{
		return (NULL);
	}

}
