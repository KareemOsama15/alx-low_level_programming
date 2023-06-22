#include <stdio.h>
#include "main.h"

/**
 * print_line - program draws a diagonal line
 * in the terminal.
 *
 * @n: parameter contain tests
 *
 * Return: Always 0(success)
 */
void print_diagonal(int n);
{
	int i, e;

	for (i = 1; i <= n; i++)
	{
		for (e = 1; e < i; e++)
		{
			_putchar(' ');
		}
		_putchar(92);
		if (i < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
