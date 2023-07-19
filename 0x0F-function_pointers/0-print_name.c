#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function that prints a name
 *
 * @name: string
 * @f: function pointer
 *
 * Return: Always 0(success)
 */
void print_name(char *name, void (*f)(char *))
{
	if (f && name)
		f(name);
}
