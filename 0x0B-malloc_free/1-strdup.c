#include <stdlib.h>
#include "main.h"

/**
 * _strdup - that returns a pointer to a newly
 *  allocated space in memory
 *  ,copy string given as a parameter
 *
 * @str:arguement of string
 *
 * Return: pointer to a newly allocated space in memory
 */
char *_strdup(char *str)
{
	/*declare pointer for new string, and one to get length, i for loop*/
	unsigned int i, length = 0;
	char *c_str;

	/*retrun null if given string was null*/
	if (str == NULL)
		return (NULL);

	/*get the length of given string*/
	while (str[length] != '\0')
		length++;

	/*allocate memory throught new pointer in the heap*/
	c_str = (char *)malloc(length * sizeof(char));

	/*if insufficient memory available return null*/
	if (c_str == NULL)
		return (NULL);

	/*copy passed string to our pointer of allocated memory area*/
	for (i = 0; i < length; i++)
		c_str[i] = str[i];

	return (c_str);
}
