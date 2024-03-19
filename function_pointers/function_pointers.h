#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H
/**
 * print_name - prints a string array pointed by name
 * @name: array pointer
 * @f: pointer to a function
 *
 * return: void
 *
 */

void print_name(char *name, void (*f)(char *));

/**
 * array_iterator - executes funtion given as parameter
 * @size: size of array
 * @array: array of integers
 * @action: pointer to a function
 * return: void
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int));
#endif
