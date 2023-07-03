#include <stdio.h>
#include "main.h"

/**
 *  _memset - function hat fills memory with
 *   a constant byte
 *
 * @s: pointer to the momery area
 * @b: constant byte
 * @n: bytes of memory area
 *
 * Return: pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}

	return (s);
}
