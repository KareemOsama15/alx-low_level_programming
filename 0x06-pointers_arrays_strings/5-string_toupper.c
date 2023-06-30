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
	int i = 0, e = 0;

	while (s[i] != '\0')
		i++;
	while (e < i)
	{
		if (s[e] >= 'a' && s[e] <= 'z')
			s[e] -= 32;
		e++;
	}
}
