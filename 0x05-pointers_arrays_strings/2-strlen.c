#include <stdio.h>
#include "main.h"

/**
 * _strlen - function that returns the length
 * of a string.
 * @s: parameter contain sting
 * Return: lenght of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}
