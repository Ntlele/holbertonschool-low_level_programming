#include <stddef.h>
#include <sys/types.h>
#ifndef MAIN_H
#define MAIN_H

/**
 * _putchar - prints value of variable
 * @c: stores value to print
 *
 * Return: value in c
 */
int _putchar(char c);

ssize_t read_textfile(const char *filename, size_t letters);
#endif
