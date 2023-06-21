#include "main.h"
#include <stdio.h>

/**
 * print_times_table - function that prints the n times table, starting with 0
 *
 * Return:  the n times table
 */
void print_times_table(int n)
{
	int i, e, res;

	if (n < 0 || n > 15)
		break;
	else
	{	
		for (i = 0; i <= n; i++)
		{
			_putchar(48);
			for (e = 1; e <= n; e++)
			{
				res = i * e;
				_putchar(',');
				_putchar(' ');

				if ( res <= 9)
				{
					_putchar(' ');
					_putchar(res);	
				}
				else
				{
					_putchar((res % 10) + 48);
					_putchar((res / 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}
