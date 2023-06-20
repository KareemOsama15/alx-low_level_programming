#include "main.h"
#include <stdio.h>

/**
 * _islower - function that checks for lowercase character
 *
 * @c: parameter that contain alphabet
 *
 * Return: 1 if lower , 0 if not
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
