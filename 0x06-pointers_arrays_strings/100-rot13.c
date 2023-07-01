#include <stdio.h>
#include "main.h"

/**
 * rot13 - function that encodes
 * a string using rot13.
 *
 * @str: parameter contain string
 *
 * Return: exchange charactres with numbers
 */
char *rot13(char *str)
{
	/*-return leters and numbers to ascii */
	/* - 1 if to check if index is a chararacter capital or small  */
	/*- 2 loops ,one for continue until reach to \0 */
	/* ,second to change index of char with ceaser code  */

	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char ceaser[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, e;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (e = 0; e < 52 ; e++)
		{
			if (str[i] == alphabet[e])
			{
				str[i] = ceaser[e];
				break;
			}
		}
	}
	return (str);
}
