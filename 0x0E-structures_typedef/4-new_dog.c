#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns the length of a str
 * @s: str to evaluate
 *
 * Return: the length of the str
 */
int _strlen(char *s)
{
	int j;

	j = 0;

	while (s[j] != '\0')
	{
		j++;
	}

	return (j);
}

/**
 * *_strcpy - copies the str pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: ptr to the buffer in which we copy the str
 * @src: str to be copied
 *
 * Return: the ptr to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, j;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (j = 0; j < len; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: ptr to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int ln1, ln2;

	ln1 = _strlen(name);
	ln2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (ln1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (ln2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}

