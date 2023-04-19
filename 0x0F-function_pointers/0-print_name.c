#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - print name using ptr to fct
 * @name: str to add
 * @t: ptr to fct
 * Return: nothing
 **/
void print_name(char *name, void (*t)(char *))
{
	if (name == NULL || t == NULL)
		return;

	t(name);
}

