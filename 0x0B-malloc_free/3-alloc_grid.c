#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - that returns a pointer to a 2
 *  dimensional array of integers
 *
 * @width:arguement of array width
 * @height: arguemet of array height
 * Return: pointer to a 2 dimensional array of int
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	ptr = (int **)malloc(width * sizeof(int *));

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (i = 0; i < width; i++)
	{
		ptr[i] = (int *)malloc(height * sizeof(int));
		if (ptr[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(ptr[i]);
			free(ptr);
			return (NULL);
		}
	}

	for (i = 0; i < width; i++)
		for (j = 0; j < height; j++)
			ptr[i][j] = 0;

	return (ptr);
}
