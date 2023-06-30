#include <stdio.h>
#include "main.h"

/**
 * string_toupper - function that convert
 * lowercase to uppercase.
 *
 * @s: parameter that contains string
 *
 * Return: string in uppercase
 */
char *string_toupper(char *s)
{
	int e = 0;

	while (s[e] != "\0")
	{
		if ((s[e] >= 'a') && (s[e] <= 'z'))
			s[e] = s[e] - 32;
		e++;
	}
}
