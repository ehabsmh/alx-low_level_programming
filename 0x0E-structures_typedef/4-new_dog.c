#include "dog.h"

/**
 * _strlen - checks the length of a string
 * @s: string to check
 *
 * Return: int length of the string
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;
	return (length);
}

/**
 * _strcpy - copies the string pointed to by src
 * to the buffer pointed to by dest
 * @dest: Pointer to the buffer
 * @src: pointer to string
 *
 * Return: pointer to the string which copied
 */

char *_strcpy(char *dest, char *src)
{
	char *str;

	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	str = dest;

	return (str);
}

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
	int name_len, owner_len;

	name_len = _strlen(name);
	owner_len = _strlen(owner);

	new_dog = malloc(sizeof(dog_t));

	if (!new_dog)
		return (NULL);

	new_dog->name = malloc(sizeof(char) * (name_len + 1));
	new_dog->age = age;
	new_dog->owner = malloc(sizeof(char) * (owner_len + 1));

	if (!(new_dog->owner) || !(new_dog->name))
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}

	_strcpy(new_dog->name, name);
	new_dog->name[name_len] = '\0';

	_strcpy(new_dog->owner, owner);
	new_dog->owner[owner_len] = '\0';

	return (new_dog);
}
