#include "main.h"
		
#include <stdlib.h>
		
/**
		
 * alloc_grid - nested loop to make grid
		
 * @width: width input
		
 * @height: height input
		
 * Return: pointer to 2 dim. array
		
 */
		
int **alloc_grid(int width, int height)
		
{
		
	int **mee;
		
	int z, k;
		

		
	if (width <= 0 || height <= 0)
		
		return (NULL);
		

		
	mee = malloc(sizeof(int *) * height);
		

		
	if (mee == NULL)
		
		return (NULL);
		

		
	for (z = 0; z < height; z++)
		
	{
		
		mee[z] = malloc(sizeof(int) * width);
		

		
		if (mee[z] == NULL)
		
		{
		
			for (; z >= 0; z--)
		
				free(mee[z]);
		

		
			free(mee);
		
			return (NULL);
		
		}
		
	}
		

		
	for (z = 0; z < height; z++)
		
	{
		
		for (k = 0; k < width; k++)
		
			mee[z][k] = 0;
		
	}
		

		
	return (mee);
		
}
