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
	/* get dest length - add src at most n bytes - add /0 to dest - return dest*/

	int i = 0, c = 0;

	while (*(dest + i) != '\0')
		i++;
	while (c < n)
	{
		*(dest + i + c) = *(src + c);
		c++;

		if (*(src + c) == '\0')
			break;
	}
	*(dest + i + c) = '\0';
	return (dest);
}
