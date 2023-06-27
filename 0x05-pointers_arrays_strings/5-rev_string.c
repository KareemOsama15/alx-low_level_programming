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
	int n = 0, i, j;
	char *str, temp;

	while (n >= 0)
	{
		if (s[n] == '\0')
			break;
		count++;
	}
	str = s;

	for (i = 0; i < (n - 1); i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp = *(str + j);
			*(str + j) = *(str + (j - 1));
			*(str + (j - 1)) = temp;
		}
	}
}
