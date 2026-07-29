#include "function_pointers.h"
#include <stdlib.h>
/**
* array_iterator - executes a function on element of an array
* @array: the array to iterate through
* @size: the size of the array
* @action: pointer to the function to use on each element
*
* Return: Nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
