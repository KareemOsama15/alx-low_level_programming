#include <stdio.h>
#include "main.h"

/**
 * _strcat - function that concatenates 2 strings
 *
 * @dest: first string
 * @src: second string
 *
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, e = 0, n = 0, count;

	while (*(dest + i) != '\0')
		i++;

	while (*(src + e) != '\0')
		e++;

	n = i + e;

	for (count = 0; count < n && *(src + count) != '\0'; count++)
		*(dest + i + count) = *(src + count);

	*(dest + i + count) = '\0';

	return (dest);
}
