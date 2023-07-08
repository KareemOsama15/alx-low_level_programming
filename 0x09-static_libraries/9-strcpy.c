#include <stdio.h>
#include "main.h"

/**
 * _strcpy - function Return value:
 * the pointer to dest.
 *
 * @dest: destination parameter
 * @src: source parameter
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (i >= 0)
	{
		dest[i] = src[i];

		if (src[i] == '\0')
			break;
		i++;
	}
	return (dest);
}
