#ifndef DOG_H
#define DOG_H


/**
 * struct dog - a dog struct
 * @name: Pointer to dog name
 * @age: dog age
 * @owner: Pointer to owner name
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
