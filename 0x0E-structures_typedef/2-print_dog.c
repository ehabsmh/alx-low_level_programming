#include "dog.h"

/**
 * print_dog - prints a dog
 * @d: pointer to object of a struct dog
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	char *dog_name, *dog_owner;
	float *dog_age;

	dog_name = d->name;
	dog_age = &(d->age);
	dog_owner = d->owner;

	if (!dog_name)
		dog_name = "(nil)";

	if (!dog_owner)
		dog_owner = "(nil)";

	if (d)
	{
		printf("Name: %s\n", dog_name);
		printf("Age: %f\n", *dog_age);
		printf("Owner: %s\n", dog_owner);
	}
}
