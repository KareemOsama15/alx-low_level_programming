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
	int i = 0, res = 0;

	while (res == 0)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			break;
		res = s1[i] - s2[i];
		i++;
	}
	return (res);
}

