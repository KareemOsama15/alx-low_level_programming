#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - function that concatenates
 *  all the arguments of your program.
 *
 * @b: arguement contain test cases
 *
 * Return: no return
 */
void *malloc_checked(unsigned int b);
{
	char *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
