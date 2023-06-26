#include <stdio.h>
#include "main.h"

/**
 * swap_int - program
 *
 * @a: parameter contain 'a' value
 * @b: parameter contain 'b' value
 *
 * Return: Always 0(success)
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
