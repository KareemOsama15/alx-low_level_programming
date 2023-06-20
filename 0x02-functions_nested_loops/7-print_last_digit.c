#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 *
 * @num: parameter that contain number
 * Return: last digit
 */
int print_last_digit(int num)
{
	num = num % 10;
	_putchar(num);

	return (0);
}
