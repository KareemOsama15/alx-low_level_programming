#include <unistd.h>
#include "main.h"

/**
 * _putchar - program that include function print specific char
 * @c: the char will print
 *
 * Return: Always 1(success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
