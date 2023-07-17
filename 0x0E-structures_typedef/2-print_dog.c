#include <stdio.h>
#include "dog.h"

/**
 * print_dog - that prints a struct dog
 *
 * @d: a pointer of struct dog
 *
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);

		if (d->age == NULL)
			printf("Age: (nil)\n");
		else
			printf("Age: %f\n", d->age);

		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %f\n", d->age);
	}
}
