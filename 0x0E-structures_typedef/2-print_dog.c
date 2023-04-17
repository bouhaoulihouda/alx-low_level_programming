#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @b: struct dog to print
 */
void print_dog(struct dog *b)
{
	if (b == NULL)
		return;

	if (b->name == NULL)
		b->name = "(nil)";
	if (b->owner == NULL)
		b->owner = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", b->name, b->age, b->owner);
}

