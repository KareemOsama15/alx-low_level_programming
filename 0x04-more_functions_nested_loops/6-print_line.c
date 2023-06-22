#include <stdio.h>
#include "main.h"

/**
 * print_line - program draws a straight line
 * in the terminal.
 *
 * @n: parameter contain tests
 *
 * Return: Always 0(success)
 */
void print_line(int n)
{
	int c = 95, i = 1;

	if (n != 0 && n > 0)
	{
		while (i <= n)
		{
			_putchar(c);
			i++;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
