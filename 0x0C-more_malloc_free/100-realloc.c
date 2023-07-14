#include "main.h"
#include <stdlib.h>

/**
 * _realloc - function that
 *      reallocates a memory block
 * @ptr: pointer of allocate memory
 * @old_size: old size in bytes
 * @new_size: new size in bytes
 * Return: allocate new block of memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		ptr = malloc(new_size);

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
