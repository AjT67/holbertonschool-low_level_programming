#include "dog.h"
#include <stdlib.h>
#include <string.h>

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
	unsigned int i;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	name_copy = malloc(strlen(name) + 1);
	if (name_copy == NULL)
	{
		free(d);
		return (NULL);
	}

	owner_copy = malloc(strlen(owner) + 1);
	if (owner_copy == NULL)
	{
		free(d);
		free(name_copy);
		return (NULL);
	}

	for (i = 0; name[i] != '\0'; i++)
		name_copy[i] = name[i];
	name_copy[i] = '\0';

	for (i = 0; owner[i] != '\0'; i++)
		owner_copy[i] = owner[i];
	owner_copy[i] = '\0';

	d->name = name_copy;
	d->age = age;
	d->owner = owner_copy;

	return (d);
}
