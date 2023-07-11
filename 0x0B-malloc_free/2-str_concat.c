#include <stdlib.h>
#include "main.h"

/**
 * str_concat - function concatenates 2 strings
 *
 * @s1: arguement of string 1
 * @s2: arguement of string 1
 *
 * Return: concatenate 2 strings
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, length1 = 0, length2 = 0;
	char *str;

	while (s1[length1] != '\0')
		length1++;
	while (s2[length2] != '\0')
		length2++;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	str = malloc(sizeof(char) * (length1 + length2 + 1));

	if (str == NULL)
	{
		free(str);
		return (NULL);
	}

	for (i = 0; i < length1; i++)
		str[i] = s1[i];

	for (j = 0; j < length2; j++, i++)
		str[i] = s2[j];

	return (str);
}
