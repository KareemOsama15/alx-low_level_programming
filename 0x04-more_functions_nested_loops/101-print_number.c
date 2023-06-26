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
	unsigned int num = 0;

	if (n > 0)
	{
		while (n != 0)
		{
			num = num * 10 + n % 10;
			n /= 10;
		}
		while (num != 0)
		{
			_putchar(num % 10 + 48);
			num /= 10;
		}
	}
	else if (n < 0)
	{
		n *= -1;

		_putchar('-');
		while (n != 0)
		{
			num = num * 10 + n % 10;
			n /= 10;
		}
		while (num != 0)
		{
			_putchar(num % 10 + 48);
			num /= 10;
		}
	}
	else
	{
		_putchar(48);
	}
}
