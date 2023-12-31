#include <stdio.h>
#include "main.h"

/**
 * _strncpy - function that copy string
 *  for n bytes
 *
 * @dest: destination string
 * @src: source sting
 * @n: n bytes from src
 *
 * Return: dset string
 */
char *_strncpy(char *dest, char *src, int n)
{
	/* 2 loops - one for copy indexes in src (at most n bytes) to dest */
    /* - second for padded dest result with null char '\0' up to length count*/
	/* - return dest */

	int i = 0;

	while (i < n)
	{
		dest[i] = src[i];

		if (src[i] == '\0')
			break;
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
