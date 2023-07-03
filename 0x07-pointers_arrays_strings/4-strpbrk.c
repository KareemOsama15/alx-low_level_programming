#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: first string.
 * @accept: second string.
 * Return: a pointer to the byte in s that matches one of the
 * bytes in accept, or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
    /*looping on indexes of segment they giving s */
    /* and loop inside accept to search if index of (s = accept)*/
    /*and return this index if found and at end return NULL to the end of string s*/ 
	unsigned int i, e;

    for (i = 0; *(s + i) != '\0'; i++)
    {
        for (e = 0; *(accept + e) != '\0'; e++)
        {
            if (*(s + i) == *(accept + e))
                return (s + i);
        }
    }
    return ('\0');
}
