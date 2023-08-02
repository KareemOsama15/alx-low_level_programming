#include <stdlib.h>
#include "main.h"

/**
 * free_grid - function that concatenates 
 *  all the arguments of your program.
 *
 * @ac: arguement of count
 * @av: arguemet of vector
 * Return: string followed by new line
 */
char *argstostr(int ac, char **av)
{
	int i, j, e = 0, len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
	}
	len += ac;

	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[e] = av[i][j];
			e++;
		}
		if (str[e] == '\0')
			str[e++] = '\n';
	}
	return (str);
}
