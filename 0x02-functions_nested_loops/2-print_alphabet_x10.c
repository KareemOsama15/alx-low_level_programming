#include "main.h"

/**
 * print_alphabet_x10 - function that prints 10 times the alphabet in lowercase
 *
 * Return: Always 0(success)
 */
void print_alphabet_x10(void)
{
	int i, e;

	for (i = 1; i < 11; i++)
	{
		e = 97;
		while (e <= 122)
		{
			_putchar(e);
			e++;
		}
	}
	_putchar('\n');
}
