#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function concatenates 2 strings
 *
 * @s1: arguement contain string 1
 * @s2: arguement contain string 2
 * @n: bytes will use in s2
 *
 * Return: newly allocated space in memory,
 * which contains s1, followed by the first n bytes
 *   of s2, and null terminated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	/*declare variables*/
	char *str;
	unsigned int len1, len2, i, j;

	/*get length of s1, s2*/
	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;
	
	/*condition if s1 or s2 was null treat them like empty string*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/*condition if n was greater or equal to length of s2*/
	/* use all bytes of s2*/
	if (n >= len2)
		n = len2;

	/*allocate memory for s1, s2*/
	str = malloc(sizeof(char) * (len1 + n + 1));
	if (str == NULL)
		return (NULL);

	/*fullfil allocated memory with its value of 2 passed strings*/
	for (i = 0; i < len1; i++)
		str[i] = s1[i];
	for (j = 0; j < n; j++, i++)
		str[i] = s2[j];
	str[i] = '\0';

	return (str);
}
