#include "main.h"
#include <stdio.h>

/**
 * _strcpy - prints n elements of an array of integers
 * @src: copies the string pointed to by src
 * @dest: points to the buffer
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != 0)
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = src[i];
	return (dest);
}
