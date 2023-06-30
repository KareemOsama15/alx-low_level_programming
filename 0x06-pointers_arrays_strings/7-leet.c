#include <stdio.h>
#include "main.h"

/**
 * leet - function function that encodes
 * a string into 1337
 *
 * @str: parameter contain string
 *
 * Return: exchange charactres with numbers
 */
char *leet(char *str)
{
	int i = 0, e;
	int upp_let[] = {65, 69, 79, 84, 76};
	int low_let[] = {97, 101, 111, 116, 108};
	int num[] = {52, 51, 48, 55, 49};

	while (i = 0; *(str + i) != '\0')
	{
		for (e = 0; e < 5; e++)
		{
			if (*(str + i) == low_let[e] || *(str + i) == upp_let[e])
				*(str + i) = num[e];
			break;
		}
		i++;
	}
	return (str);
}
