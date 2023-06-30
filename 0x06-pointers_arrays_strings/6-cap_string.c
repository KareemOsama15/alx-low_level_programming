#include <stdio.h>
#include "main.h"

/**
 * cap_string - function that capitalizes all
 * words of a string.
 *
 * @s: parameter contains string
 *
 * Return: capitalize words
 */
char *cap_string(char *s)
{
	int i, e = 0;
	char sep[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (s[i] >= 97 && s[i] <= 122)
		s[i] -= 32;
	i++;

	for (i = 0; s[i] != '\0'; i++)
	{
		while (e < 13)
		{
			if (s[i] == sep[e])
			{
				if (s[i] >= 97 && s[i] <= 122)
					*(s + (i + 1)) = *(s + (i + 1)) - 32;
			}
			e++;
		}
	}
	return (s);
}
