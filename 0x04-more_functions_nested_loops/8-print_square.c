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

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (e = 0; e < size; e++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
