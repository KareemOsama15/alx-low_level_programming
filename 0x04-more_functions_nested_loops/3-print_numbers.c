#include <stdio.h>
#include "main.h"

/**
 * print_numbers - program prints the numbers, from 0 to 9
 *
 * Return: 10 numbers
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
		_putchar(i + 48);
}
