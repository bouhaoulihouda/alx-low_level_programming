#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints each array elem on a newl
 * @array: array
 * @sz: how many elem to print
 * @act: ptr to print in regular or hex
 * Return: void
 */
void array_iterator(int *array, size_t sz, void (*act)(int))
{
	unsigned int k;

	if (array == NULL || act == NULL)
		return;

	for (k = 0; k < sz; k++)
	{
		act(array[k]);
	}
}

