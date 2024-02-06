#include "search_algos.h"


/**
 * jump_search - function that searches for a value in an array of integers
 *	using the jump search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 * Return: first index where value is located, or -1 if not found
*/
int jump_search(int *array, size_t size, int value)
{
	/* 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 */
	size_t low = 0, sqroot = sqrt(size), high = sqroot, i;

	if (!array)
		return (-1);

	while (high < size)
	{
		printf("Value checked array[%ld] = [%d]\n", low, array[low]);
		if (value <= array[high])
			break;

		low = high;
		high += sqroot;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", low, high);
	for (i = low; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
