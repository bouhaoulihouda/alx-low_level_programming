#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a var of type struct dog
 * @b: ptr to struct dog to initialize
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initialize
 */
void init_dog(struct dog *b, char *name, float age, char *owner)
{
	if (b == NULL)
		b = malloc(sizeof(struct dog));
	b->name = name;
	b->age = age;
	b->owner = owner;
}

