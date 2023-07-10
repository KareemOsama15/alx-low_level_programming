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
	unsigned int i, length = 0;
	char *c_str;
	
	if (str == NULL)
		return (NULL);
	
	while (str[length] != '\0')
		length++;
	
	c_str = (char *)malloc*(length * sizeof(char));
	
	if (c_str == NULL)
	{
		free(c_str);
		return (NULL);
	}
	
	for (i = 0; i < length; i++)
		c_str[i] = str[i];
	
	return (c_str);
}
