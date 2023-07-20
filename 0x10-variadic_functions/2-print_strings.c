#include "variadic_functions.h"

/**
 * print_strings - function that prints strings
 *
 * @n: number of arguements
 * @separator: string contain separator and space
 * Return: printed string
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list ptr;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ptr, char *);
		if (str)
			printf("%s", str);
		else
			printf("nil");
		if (i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(ptr);
}
