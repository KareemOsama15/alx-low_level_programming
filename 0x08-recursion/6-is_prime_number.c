#include "main.h"
int prime_num(int n, int i);

/**
 * is_prime_number - function that calls function
 *      returns 1 if the input integer
 *      is a prime number, otherwise return 0.
 *
 * @n: arguement of number
 *
 * Return: number prime or not
 */
int is_prime_number(int n)
{
	return (prime_num(n, 2));
}

/**
 * prime_num - that returns 1 if the input integer
 *      is a prime number, otherwise return 0
 *
 * @n: arguement of number
 * @i: tests nums
 * Return: number prime or not
 */
int prime_num(int n, int i)
{
	if (n % i == 0 && i < n)
		return (1);
	else if (n % i != 0 && i < n)
		return (0);
	else
		return (prime_num(n, i + 1));
}
