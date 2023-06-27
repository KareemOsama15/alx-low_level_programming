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
	int i = 0, n;

	while (s[i] != '\0')
		i++;

	n = i;
	while (n >= 0)
	{
		_putchar(s[n]);

		if (s[n] == '\0')
			break;

		n--;
	}
}
