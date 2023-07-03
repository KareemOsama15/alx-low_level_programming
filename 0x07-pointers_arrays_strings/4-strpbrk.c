#include <stdio.h>
#include "main.h"

/**
 *  _strpbrk- function that searches a string 
 *  for any of a set of bytes
 *
 * @s: initial segment
 * @accept: string that s comapered with
 *
 * Return: length of s
 */
char *_strpbrk(char *s, char *accept)
{
	int i, e;

    for (i = 0; *(s + i) != '\0'; i++)
    {
        for (e = 0; *(accept + e) != 0; e++)
        {
            if (*(s + i) == *(accept + e))
                return (s + i);
        }
    }
}
