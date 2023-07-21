#include "variadic_functions.h"

/**
 * print_all - function that prints anything.
 *
 * @format: list of types of arguments passed
 * Return: print any passed arguement
 */
void print_all(const char * const format, ...)
{
	int i = 0, arg_len = 0, x = 0;
	char *str;
	va_list ptr;

	while (format[arg_len] != '\0')
		arg_len++;

	va_start(ptr, format);
	while (i < arg_len)
	{
		switch (format[i])
		{
			case 'f':
					printf("%f", va_arg(ptr, double)), x = 1;
					break;
			case 'i':
					printf("%d", va_arg(ptr, int)), x = 1;
					break;
			case 'c':
				   printf("%c", va_arg(ptr, int)), x = 1;
					break;
			case 's':
					str = va_arg(ptr, char *), x = 1;
					if (!(str))
					{
						printf("(nil)");
						break;
					}
					printf("%s", str);
					break;
			default:
					x = 0;
					break;
		}
		if ((i != arg_len - 1) && (x == 1))
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(ptr);
}
