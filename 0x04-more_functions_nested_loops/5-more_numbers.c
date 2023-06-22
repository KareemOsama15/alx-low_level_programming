#include <stdio.h>
#include "main.h"

/**
 * more_numbers - program print 10 times number 0-14
 *
 * Return: 15 numbers
 */
void more_numbers(void)
{
	int i, n;

	for (i = 1; i <= 10; i++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n >= 10)
			{
				_putchar((n \ 10) + 48);
			}
			_putchar((n % 10) + 48);
		}
		_putchar('\n');
	}
}
