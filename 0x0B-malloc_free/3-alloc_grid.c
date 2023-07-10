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

	if ((width == 0 || height == 0) || (width < 0 || height < 0))
		return (NULL);

	arr = (int *)malloc(sizeof(int *) * width);

	for (i = 0; i < width; i++)
	{
		arr[i] = (int *)malloc(sizeof(int *) * height);
	}

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
			arr[i][j] = 0;
	}

	return (arr);
}
