#include "dog.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: Dog name
 * @age : Dog age
 * @owner: Dog owner
 *
 * Return: Pointer to new dog, or NULL if function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *name_cpy, *owner_cpy;
	size_t name_len = strlen(name);
	size_t owner_len = strlen(owner);

	/* Allocate memory for the dog struct */
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	/* Allocate memory for the name string */
	name_cpy = malloc(sizeof(char) * (name_len + 1));
	if (name_cpy == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	/* Copy the same string and null-terminate it */
	strncpy(name_cpy, name, name_len);
	name_cpy[name_len] = '\0';

	/* Allocate memory for the owner string */
	owner_cpy = malloc(sizeof(char) * (owner_len + 1));
	if (owner_cpy == NULL)
	{
		free(new_dog);
		free(name_cpy);
		return (NULL);
	}

	/* Copy the owner string and null-terminate it */
	strncpy(owner_cpy, owner, owner_len);
	owner_cpy[owner_len] = '\0';

	/* Assign the copied strings to the new dog struct */
	new_dog->name = name_cpy;
	new_dog->age = age;
	new_dog->owner = owner_cpy;
	return (new_dog);
}
