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
	int *ptr;

	ptr = (int *)malloc(b);
	if (ptr == NULL)
		return (98);
	return (ptr);
}
