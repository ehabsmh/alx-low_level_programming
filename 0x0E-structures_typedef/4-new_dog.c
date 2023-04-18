#include "main.h"
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
	int name_len = 0, owner_len = 0;

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	name_len = strlen(name);
	owner_len = strlen(owner);

	name_cpy = malloc(sizeof(char) * (name_len + 1));
	
	if (name_cpy == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	owner_cpy = malloc(sizeof(char) * (owner_len + 1));

	if (owner_cpy == NULL)
	{
		free(new_dog);
		free(name_cpy);
		return (NULL);
	}

	strcpy(name_cpy, name);
	strcpy(owner_cpy, owner);

	new_dog->name = name_cpy;
	new_dog->age = age;
	new_dog->owner = owner_cpy;

	return (new_dog);
}
