#include "main.h"

/**
 * _strlen - length of string
 * @s: string length counter
 * Return: void
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
