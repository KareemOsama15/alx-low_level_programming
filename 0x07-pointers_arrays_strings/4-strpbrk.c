#include <stdio.h>
#include "main.h"

/**
 *  _strpbrk- function that searches a string 
 *  for any of a set of bytes
 *
 * @s: initial segment
 * @accept: string that s comapered with
 *
 * Return:  beginning of the located substring, 
 *  or NULL if the substring is not found.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
		}
	}
	return ('\0');
}
