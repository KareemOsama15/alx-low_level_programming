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
		printf("Name: %s\n", d->name ? d->name : "nil\n");
		printf("Age: %f\n", d->age);
		printf("Owner: %f\n", d->owner ? d->owner : "nil\n");
	}
}
