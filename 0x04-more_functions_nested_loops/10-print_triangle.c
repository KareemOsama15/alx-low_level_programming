#include "main.h"

/**
 * print_triangle - prints a triangle.
 *
 * @size: parameter contain numbers of lines
 *
 * Return: no return.
 */
void print_triangle(int size)
{
	int i, p;

	for (i = 0; i < size; i++)
	{
		for (p = 1; p < (size - i); p++)
			_putchar(' ');
		for (p--; p < size; p++)
			_putchar(35);
		if (i < (size - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
