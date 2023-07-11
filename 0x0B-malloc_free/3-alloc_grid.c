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
	int **arr;
	int i, j;

	if (height < 1 || width < 1)
		return (NULL);

	arr = malloc(sizeof(int *) * width);

	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	for (i = 0; i < width; i++)
	{
		arr[i] = malloc(sizeof(int *) * height);
		if (arr[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(arr[i]);
			free(arr);
			return (NULL);
		}
	}

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
			arr[i][j] = 0;
	}

	return (arr);
}
