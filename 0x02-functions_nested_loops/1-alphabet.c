#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - function that prints the alphabet, in lowercase
 *
 * Return: Always 0(success)
 */
void print_alphabet(void)
{
	int i = 97;

	for (; i <= 122; i++)
		_putchar(i);

	_putchar('\n');
}
