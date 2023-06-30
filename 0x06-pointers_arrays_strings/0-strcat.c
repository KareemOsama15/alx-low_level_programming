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
	/*dest length - add src to length - add \0 to dest - return dest*/
	int i = 0, c;

	while (*(dest + i) != '\0')
		i++;
	for (c = 0; *(src + c) != '\0'; c++)
	{
		*(dest + i + c) = *(src + c);
	}

	*(dest + i + c) = '\0';
	return (dest);
}
