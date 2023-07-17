#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes a dog of type dog
 * @d: pointer to variable of struct dog
 * @name: pointer to the dog name
 * @age: dog age
 * @owner: pointer to the dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}