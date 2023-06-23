#include <stdio.h>
#include "main.h"

/**
 * print_number - program that prints integer
 *
 * @n: parameter that contain number
 *
 * Return: int tests
 */
void print_number(int n)
{
	if (n >= 0)
	{
		if (n <= 9)
		{
			_putchar(n + '0');
		}
		else if (n <= 99)
		{
			_putchar((n / 10) + 48);
			_putchar((n % 10) + 48);
		}
		else if (n <= 999)
		{
			_putchar((n / 100) + 48);
			_putchar((n / 10) % 10 + 48);
			_putchar((n % 10) + 48);
		}
		else
		{
			_putchar((n / 1000) + 48);
			_putchar((n / 100) % 10 + 48);
			_putchar((n / 10) % 10 + 48);
			_putchar((n % 10) + 48);
		}
	}
	else
	{
		n *= -1;
		_putchar('-');
		_putchar((n / 10) + 48);
		_putchar((n % 10) + 48);
	}
}
