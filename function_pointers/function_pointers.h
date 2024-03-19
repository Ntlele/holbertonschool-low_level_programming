#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H
/**
 * print_name - prints a string array pointed by name
 * @name: array pointer
 * f: function pointer
 *
 * return: void
 *
 */

void print_name(char *name, void (*f)(char *));
#endif