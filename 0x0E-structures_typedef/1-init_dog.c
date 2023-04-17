#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer struct dog to initialise
 * @name: pointer to dog name
 * @age: dog age
 * @owner: pointer to owner of dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
