#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - function that concatenates
 *  all the arguments of your program.
 *
 * @b: arguement contain test cases
 *
 * Return:  pointer to the allocated memory
	if fails cause normal process termination (98)
 */
void *malloc_checked(unsigned int b);
{
	int *ptr = malloc(b);

	if (ptr == 0)
		exit(98);

	return (ptr);
}
