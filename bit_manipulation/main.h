#ifndef MAIN_H
#define MAIN_H

/**
 * _putchar - Prints out a variable
 * @c: value to print
 *
 * Return: return 0
 */
int _putchar(char c);

unsigned int binary_to_uint(const char *b);

void print_binary(unsigned long int n);

int get_bit(unsigned long int n, unsigned int index);
#endif
