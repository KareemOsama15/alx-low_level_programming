#include <stdio.h>
#include "main.h"

/**
 * puts_half - function  print the second half
 * of the string
 *
 * @str: parameter contain sting
 *
 * Return: second half of string
 */
void puts_half(char *str)
{
	int i = 0, n;

	while (str[i] != '\0')
		i++;

	n = i / 2;

	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
