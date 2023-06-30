#include <stdio.h>
#include "main.h"

/**
 * reverse_array- function that reverse array
 *
 * @a: array elements
 * @n: length of array
 *
 * Return: no return
 */
void reverse_array(int *a, int n)
{
	int i, e, temp;

	for (i = 0; i < (n - 1); i++)
	{
		for (e = i + 1; e > 0; e--)
		{
			temp = a[e];
			a[e] = a[e - 1];
			a[e - 1] = temp;
		}
	}
}
