#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a string array pointed by name
 * @name: array pointer
 * @f: pointer to function
 *
 * return: void
 *
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
