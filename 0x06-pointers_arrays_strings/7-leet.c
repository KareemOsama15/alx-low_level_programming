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
	/*-return leters and numbers to ascii */
	/* -1 if to check if index = specified chars */
	/*-2 loops ,one for continue until reach to \0 */
	/* ,second to change index of char with num  */

	int c[] = {65, 69, 79, 84, 76};
	int s[] = {97, 101, 111, 116, 108};
	int n[] = {52, 51, 48, 55, 49};
	int i = 0, e;

	while (str[i] != '\0')
	{
		for (e = 0; e < 5; e++)
		{
			if (str[i] == c[e] || str[i] == s[e])
				str[i] = n[e];
		}
		i++;
	}
	return (str);
}
