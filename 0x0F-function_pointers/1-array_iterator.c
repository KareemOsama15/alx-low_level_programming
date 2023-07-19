#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - function that executes
 *  function given as a parameter.
 *
 * @array: The given array
 * @action: function pointer
 * @size: size of array
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array && size && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
