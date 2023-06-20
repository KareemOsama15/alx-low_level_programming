#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character
 *
 * @c: the parameter that contain the alphabet
 *
 * Return: 1 if a letter , 0 if not
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122 || c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
