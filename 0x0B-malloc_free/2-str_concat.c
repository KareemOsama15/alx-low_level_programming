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

	/*retrun null if one of given string was null*/
	/*this condition puts before get length of them*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/*get the length of  2 given string*/
	while (s1[length1] != '\0')
		length1++;
	while (s2[length2] != '\0')
		length2++;

	/*allocate memory throught new pointer in the heap*/
	str = malloc(sizeof(char) * (length1 + length2 + 1));

	/*if insufficient memory available return null*/
	if (str == NULL)
	{
		free(str);
		return (NULL);
	}

	/*copy passed string  s1 to our pointer of allocated memory area*/
	/*and concatenate with string s2 to allocated memory*/
	for (i = 0; i < length1; i++)
		str[i] = s1[i];

	for (j = 0; j < length2; j++, i++)
		str[i] = s2[j];

	return (str);
}
