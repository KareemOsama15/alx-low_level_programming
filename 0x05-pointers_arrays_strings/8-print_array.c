#include <stdio.h>
#include "main.h"

/**
 * print_array - function
 *
 * @a: parameter contain index of array value
 * @n: parameter contain number of elements
 * Return: indexes of an array
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i == 0)
			printf("%d", a[0]);
		else if (i > 0)
			printf(", %d", a[i]);
		else
			printf("\n");
		i++;
	}
	printf("\n");
}
