#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of int
 * @min: min range of vals stored
 * @max: max range of vals stored and nmb of elemts
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *pt;
	int j, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	pt = malloc(sizeof(int) * size);

	if (pt == NULL)
		return (NULL);

	for (j = 0; min <= max; j++)
		pt[j] = min++;

	return (pt);
}
