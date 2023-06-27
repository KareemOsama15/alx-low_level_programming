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
	int i = 0, n = 0;
	char temp;

	while (s[i] != '\0')
		++i;

	while (n < i / 2)
	{
		temp = s[n];
		s[n] = s[n - 1 - i];
		s[n - 1 - i] = temp;
		++n;
	}
}
