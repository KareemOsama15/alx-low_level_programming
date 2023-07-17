#include <stdio.h>
#include "dog.h"

/**
 * init_dog - function that initialize
 *  a variable of type struct dog
 *
 * @d: a pointer of struct dog
 * @name: pointer of character
 * @age: integer
 * @owner: pointer of character
 *
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	while (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
