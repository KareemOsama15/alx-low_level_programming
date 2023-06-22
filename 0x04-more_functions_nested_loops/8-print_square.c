#include <stdio.h>
#include "main.h"

/**
 * print_square - program  prints a square
 *
 *@size: parameter contains test cases
 * Return: nothing
 */
void print_square(int size)
{
	int i, e;

	for (i = 1; i <= size; i++)
	{
		for (e = 0; e < size; e++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
