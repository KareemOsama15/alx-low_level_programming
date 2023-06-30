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
	int i, e;
	int upp_case[] = {65, 69, 79, 84, 76};
	int low_case[] = {97, 101, 111, 116, 108};
	int num[] = {52, 51, 48, 55, 49};

	for (i = 0; *(str + i) != '\0'; i++)
	{
		for (e = 0; e < 5; e++)
		{
			if (*(str + i) == low_case[e] || *(str + i) == upp_case[e])
				*(str + i) = num[e];
			break;
		}
	}
	return (str);
}
