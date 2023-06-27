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
	int i = 1;

	printf("%d", a[0]);
	while (i < n)
	{
		printf(", %d", a[i]);
		i++;
	}
	printf("\n");
}
