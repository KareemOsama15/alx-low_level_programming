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
    /*looping on indexes of segment they giving s */
    /* and loop inside accept to search if index of (s = accept)*/
    /*and return this index if found and at end return NULL to the end of string s*/ 
	int i, e;

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
