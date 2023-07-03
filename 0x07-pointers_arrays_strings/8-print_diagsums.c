#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - function that prints the sum
 *  of the 2 diagonals of a square matrix of int
 *
 * @a: parameter contains array
 * @size: size of array
 *
 * Return: no return
 */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i]; /*sum index i from every row from left*/
		sum2 += a[size - 1 - i];    /*sum index i from every row from left*/
		a += size;  /*maake pointer of a = a + size and move it to next row*/
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
