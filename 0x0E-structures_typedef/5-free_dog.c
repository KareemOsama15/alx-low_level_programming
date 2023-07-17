#include <stdio.h>
#include "dog.h"

/**
 * free_dog - function that frees dogs.
 * @d: pointer of struct dog
 *
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->age);
		free(d->owner);
	}
}
