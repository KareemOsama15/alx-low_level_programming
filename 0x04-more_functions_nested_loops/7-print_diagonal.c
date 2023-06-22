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
	int c = 92, i = 1;

	if (n != 0 && n > 0)
	{
		while (i <= n)
		{
			if (i == 1)
				_putchar(c);
			else
			{
				int t = 9;
				int e = 1;

				while (e <= n)
				{
					_putchar(t);
					_putchar(c);
					e++;
				}
			}
			i++;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
