#ifndef _DOG_H
#define _DOG_H

/**
  * dog_t - a typedef for struct dog
  */
typedef struct dog dog_t;

/**
 * struct dog- structure contain some
 *  information about dog
 *
 * @name: name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * description: a structure called dog
 *  include some information about it
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
