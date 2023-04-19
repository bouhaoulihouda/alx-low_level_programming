#include "function_pointers.h"
/**
 * int_index - return index place if comparison = true, else -1
 * @array: array
 * @sz: size of elmts in array
 * @cp: ptr to fct of one of the 3 in main
 * Return: 0
 */
int int_index(int *array, int sz, int (*cp)(int))
{
	int k;

	if (array == NULL || sz <= 0 || cp == NULL)
		return (-1);

	for (k = 0; k < sz; k++)
	{
		if (cp(array[k]))
			return (k);
	}
	return (-1);
}

