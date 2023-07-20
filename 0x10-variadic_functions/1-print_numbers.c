#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers
 *
 * @n: number of arguements
 * @separator: string contain separator and space
 * Return: printed string
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int x;
	va_list ptr;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(ptr, int);
		if (x)
			printf("%d", x);
		if (i != (n - 1))
			if (separator)
				printf("%s", separator);
	}
	printf("\n");
	va_end(ptr);
}
