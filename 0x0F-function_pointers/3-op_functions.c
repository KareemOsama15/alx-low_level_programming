#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - function add 2 numbers
 * @a: first number
 * @b: second number
 * Return: add 2 numbers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function subtract 2 numbers
 * @a: first number
 * @b: second number
 * Return: result of operation
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function multiply 2 numbers
 * @a: first number
 * @b: second number
 * Return: result of operation
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function divide 2 numbers
 * @a: first number
 * @b: second number
 * Return: result of operation
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - function modulo 2 numbers
 * @a: first number
 * @b: second number
 * Return: result of operation
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
