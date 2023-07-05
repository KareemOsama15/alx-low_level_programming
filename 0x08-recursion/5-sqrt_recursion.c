#include "main.h"
int pow_num(int n, int i);

/**
 * _sqrt_recursion - function that calls function
 *  returns the natural square root of a number.
 *
 * @n: arguement of number
 *
 * Return: root of number
 */
int _sqrt_recursion(int n)
{
	return (pow_num(n, 1));
}

/**
 * pow_num - function that returns
 *      the natural square root of a number.
 *
 * @n: arguement of number
 * @i: result of sqrt
 * Return: root of number
 */
int pow_num(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i < n)
		return (pow_num(n, i + 1));
	else
		return (-1);
}
