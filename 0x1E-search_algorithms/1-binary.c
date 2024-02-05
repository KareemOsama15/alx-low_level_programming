#include "search_algos.h"

/**
 * binary_search - function that searches for a value in an array of integers
 *	using the Linear binary search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 * Return: first index where value is located, or -1 if not found
*/
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, mid, i;

	if (!array || !value)
		return (-1);

	while (low <= high)
	{
		printf("Searching in array:");
		for (i = low; i <= high; i++)
		{
			if (i <= high - 1)
				printf(" %d,", array[i]);
			else
				printf(" %d\n", array[i]);
		}
		mid = (low + high) / 2;

		if (array[mid] > value)
			high = mid - 1;
		else if (array[mid] < value)
			low = mid + 1;
		else
			return (mid);
	}

	return (-1);
}
