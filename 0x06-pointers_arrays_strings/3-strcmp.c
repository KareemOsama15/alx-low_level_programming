#include <stdio.h>
#include "main.h"

/**
 * _strcmp - function that compare two strings
 *
 *
 * @s1: first string
 * @s2: second sting
 *
 * Return: 0 if equal,
 * -1 if s1 < s2, 1 if s2 < s1
 */
int _strcmp(char *s1, char *s2)
{
	/* 2 loops - divide s1 index from s2 index */
	/* - get (0) if equal - (-1) if s1 < s2 - (1) if s1 > s2 */

	int i, c;

	for (i = 0; s1[i] != '\0'; i++)
	{
		for (c = 0; s2[i] != '\0'; c++)
		{
			if (s1[i] - s2[c] == 0)
				return (0);
			else if (s1[i] - s2[c] < 0)
				return (s1[i] - s2[c]);
			else
				return (s1[i] - s2[c]);
		}
	}
}
