#include "main.h"
#include <stdio.h>

/**
*int _isupper - function that checks for uppercase character.
*
*@c: parameter that contain the letter
*
*Return: 1 if uppercase , 0 otherwise
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		putchar(49);
	else
		putchar(48);
}
