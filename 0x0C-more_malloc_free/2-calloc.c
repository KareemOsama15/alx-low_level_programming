#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function allocates memory for an array
 *
 * @nmemb: arguement contain elements
 * @size: arguement contain size
 *
 * Return: pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	/*declare pointer and variables*/
	char *arr;
	unsigned int i;

	/*if elements or size equal zero return null*/
	if (nmemb == 0 || size == 0)
		return (NULL);

	/*allocate memory for array using elements multiply thier size*/
	arr = malloc(nmemb * size);

	if (arr == NULL)
		return (NULL);

	/*set memory to zero*/
	for (i = 0; i < (nmemb * size); i++)
		arr[i] = 0;

	return (arr);
}
