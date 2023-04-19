#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stddef.h>
#include <stdlib.h>

void print_name(char *name, void (*t)(char *));
int _putchar(char ch);
void array_iterator(int *array, size_t sz, void (*act)(int));
int int_index(int *array, int sz, int (*cp)(int));

#endif

