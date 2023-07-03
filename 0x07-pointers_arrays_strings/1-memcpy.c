#include <stdio.h>
#include "main.h"

/**
 * _memcpy - function that copies memory area
 *
 * @dest: copy string
 * @src: string in memory area
 * @n: bytes
 * Return: Always 0(success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	/*copy every index of src until n bytes*/
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
