#include <stdio.h>
#include "main.h"

/**
 * rev_string - function that reverses a string.
 *
 * @s: parameter contain string
 *
 * Return: no return
 */
void rev_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	while (i--)
	{
		_putchar(s[i]);
	}
}
