#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, initialized with a specific char
 * @size: the size of the array
 * @c: the char to initialize the array with
 *
 * Return: pointer to the array, or 0 if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	i = 0;

	if (size == 0)
		return (0);

	array = malloc(sizeof(char) * size);
	if (array == 0)
		return (0);

	while (i < size)
	{
		array[i] = c;
		++i;
	}

	return (array);
}
