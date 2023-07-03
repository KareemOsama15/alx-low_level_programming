#include <stdio.h>
#include "main.h"

/**
 * _strchr - functionthat locates
 * a character in a string
 *
 * @s: string
 * @c: character
 *
 * Return: pointer of first occorunce of a char
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
		if (*(s + i) - c == 0)
			break;

	return (*(s + i) == c ? (s + i) : '\0');
}
