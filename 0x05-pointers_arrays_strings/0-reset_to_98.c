#include <stdio.h>
#include "main.h"

/**
 * reset_to_98 - program  takes pointer to an int
 * as parameter and updates the value.
 *
 * @n: parameter contain value of 'n'
 *
 * Return: Always 0(success)
 */
void reset_to_98(int *n)
{
	int **p = &n;

	**p = 98;
}
