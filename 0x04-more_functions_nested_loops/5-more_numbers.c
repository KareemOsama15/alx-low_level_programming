#include <stdio.h>
#include "main.h"

/**
 * more_numbers - program print 10 times number 0-14
 *
 * Return: 15 numbers
 */
void more_numbers(void)
{
	int i, ch;

	for (i = 0; i < 10; i++)
	{
		for (ch = 0; ch < 15; ch++)
		{
			if (ch >= 10)
				_putchar((ch / 10) + 48);
			_putchar((ch % 10) + 48);
		}
		_putchar('\n');
	}
}
