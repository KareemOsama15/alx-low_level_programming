#include <stdlib.h>
#include "main.h"

/**
 * free_grid - function that frees a 2 dimensional
 *  grid created by your alloc_grid function
 *
 * @grid: pointer of pointer of 2 dimensional array
 * @height: arguemet of array height
 * Return: no thing
 */
void free_grid(int **grid, int height)
{
	int i;
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
