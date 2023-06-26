#include <stdio.h>
#include "main.h"

/**
 * puts2 - function that prints every other
 * character of a string.
 *
 * @str: parameter contain character
 * of a sting
 *
 * Return: Always 0(success)
 */
void puts2(char *str)
{
	int i;

	for (i = 0; i >= 0; i += 2)
	{
		if (str[i] == '\0')
			break;

		_putchar(str[i]);
	}
	_putchar('\n');
}
