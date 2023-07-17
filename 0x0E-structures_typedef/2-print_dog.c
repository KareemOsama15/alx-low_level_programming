#include <stdio.h>
#include "dog.h"

/**
 * print_dog - that prints a struct dog
 * @d: a pointer of struct dog
 *
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (!(d->name))
			printf("Name: (nil)");
		else
			printf("NAme: %s\n", d->name);

		printf("Age: %f\n", d->age);

		if (!(d->owner))
			printf("Owner: (nil)");
		else
			printf("Owner: %s\n", d->owner);
	}
}
