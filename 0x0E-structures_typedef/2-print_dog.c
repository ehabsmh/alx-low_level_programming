#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 * @d: pointer to struct dog
 *
 * Return: void
 */

void print_dog(struct dog *d)
{

	if (d)
	{
	if (d->name == NULL && d->owner == NULL)
		printf("(nil)");

	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
	}
}
