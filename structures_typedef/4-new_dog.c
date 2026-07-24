#include "dog.h"
#include <stdlib.h>

/**
 * dup_str - creates a heap copy of a string
 * @str: string to copy
 *
 * Return: pointer to the copy, or NULL on failure
 */
char *dup_str(char *str)
{
	unsigned int i;
	char *copy;

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	copy = malloc(i + 1);
	if (copy == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		copy[i] = str[i];
	copy[i] = '\0';
	return (copy);
}

/**
 * new_dog - creates a new dog_t
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new struct, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *name_copy;
	char *owner_copy;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	name_copy = dup_str(name);
	if (name_copy == NULL)
	{
		free(d);
		return (NULL);
	}
	owner_copy = dup_str(owner);
	if (owner_copy == NULL)
	{
		free(d);
		free(name_copy);
		return (NULL);
	}
	d->name = name_copy;
	d->age = age;
	d->owner = owner_copy;
	return (d);
}
