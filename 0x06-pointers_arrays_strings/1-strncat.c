#include <stdio.h>
#include "main.h"

/**
 * _strncat - function that concatenates 2 strings
 *
 * @dest: first string
 * @src: second string
 * @n: most bytes from src
 *
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, e = 0;

	while (*(dest + i) != '\0')
		i++;
	while (e < n)
	{
		*(dest + i) = *(src + e);

		if (*(src + e) == '\0')
			break;

		i++;
		e++;
	}
	return (dest);
}
