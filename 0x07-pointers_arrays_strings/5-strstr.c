#include <stdio.h>
#include "main.h"

/**
 * _strstr - function that locates a substring
 *
 * @needle: substring
 * @haystack: main string
 *
 * Return: beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; *(needle + i) != '\0'; i++)
	{
		for (j = 0; *(haystack + j) != '\0'; j++)
		{
			if (*(needle + i) == *(haystack + j))
				return (needle + i);
		}
	}
	return ('\0');
}
