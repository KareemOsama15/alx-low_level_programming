#include "main.h"
#include <stdio.h>

/**
 * _abs - function that computes the absolute value of an integer
 *
 * @n: parameter that contain number
 *
 * Return: absolute value of int
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		n *= -1;
		return (n);
	}
}
