#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - function that prints the 9 times table, starting with 0
 *
 * Return: print the 9 times table, starting with 0
 */
void jack_bauer(void)
{
	int a = 48, b, c, d;

	while (a < 51)
	{
		b = 48;
		while (b < 58)
		{
			c = 48;
			while (c < 54)
			{
				d = 48;
				while (d < 58)
				{
					if (a >= 50 && b >= 52)
						break;

					_putchar(a);
					_putchar(b);
					_putchar(':');
					_putchar(c);
					_putchar(d);
					_putchar('\n');

					d++;
				}
				c++;
			}
			b++;
		}
		a++;
	}
}
