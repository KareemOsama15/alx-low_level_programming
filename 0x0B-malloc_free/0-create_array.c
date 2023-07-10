#include <stdlib.h>
#include "main.h"

/**
 * create_array - function that creates an array
 *	 of chars,initializes it with a specific char
 *
 * @c:arguement of character
 * @size: arguemet of size
 * Return: string of character
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	/*if size is 0 return null*/
	if (size == 0)
		return (NULL);

	/*declare pointer to allocate memory in the heap*/
	char *ch = (char* )malloc(size * sizeof(c));

	/*return null if pointer of allocating memory fail*/
	if (ch == NULL)
		return (NULL);

	/*fullfil allocated memory with value of parameter c passed to func*/
	for (i = 0; i < size; i++)
		ch[i] = c;

	return (ch);
}
