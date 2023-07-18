#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - function that creates a new dog.
 * @name: pointer of character
 * @age: integer
 * @owner: pointer of character
 *
 * Return: nothing
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	/*declare pointer of struct to allocate memory , other variables*/
	dog_t *ptr_dog;
	int len_name, len_own, i;

	/*allocate memory for pointer point to a different data of a structure type*/
	ptr_dog = malloc(sizeof(*ptr_dog));
	/*if this pointer or any of its data type equal null free them, return null*/
	if (ptr_dog == NULL || !(name) || !(owner))
	{
		free(ptr_dog);
		return (NULL);
	}
	/*get length of strings owner and name*/
	for (len_name = 0; name[len_name] != '\0'; len_name++)
		;
	for (len_own = 0; owner[len_own] != '\0'; len_own++)
		;
	/*allocate memory to copy a specific length for a struct data type*/
	ptr_dog->name = malloc(len_name + 1);
	ptr_dog->owner = malloc(len_own + 1);
	if (!(ptr_dog->name) || !(ptr_dog->owner))
	{
		free(ptr_dog->name);
		free(ptr_dog->owner);
		free(ptr_dog);
		return (NULL);
	}
	/*copy passed arguements to the memory allocated bytes*/
	for (i = 0; i < len_name; i++)
		ptr_dog->name[i] = name[i];
	ptr_dog->name[i] = '\0';

	ptr_dog->age = age;

	for (i = 0; i < len_own; i++)
		ptr_dog->owner[i] = owner[i];
	ptr_dog->owner[i] = '\0';

	return (ptr_dog);
}
