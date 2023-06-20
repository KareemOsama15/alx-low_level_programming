#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - function that prints all natural numbers from n to 98
 *
 * @n: parameter that contain the number
 *
 * Return : all natural numbers until 98
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			_putchar(n);
			_putchar(',');
			_putchar(' ');

			if (n == 98)
				break;
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			_putchar(n);
			_putchar(',');
			_putchar(' ');
			if (n == 98)
				break;
		}
	}

}
