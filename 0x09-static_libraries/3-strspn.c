#include <stdio.h>
#include "main.h"

/**
 *  _strspn- function that gets
 *      the length of a prefix substring
 *
 * @s: initial segment
 * @accept: string that s comapered with
 *
 * Return: length of s
 */
unsigned int _strspn(char *s, char *accept)
{
	/* loop on s to get index and go for accept*/
	/*and loop on it to found uf the char exist or not*/
	/*and there is 'op = 0' if return to 1 so there is char found*/
	/*check from second loop and don't check from first loop */
	/*else check from first loop*/

	int i, e, op;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		op = 0;

		for (e = 0; *(accept + e) != '\0'; e++)
		{
			if (*(s + i) == *(accept + e))
			{
				op = 1;
				break;
			}
		}

		if (op == 0)
			break;
	}
	return (i);
}
