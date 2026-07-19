#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: the string to encode
 *
 * Return: a pointer to the resulting string
 */
char *leet(char *s)
{
	char letters[] = "aAeEoOtTlL";
	char nums[] = "4433007711";
	int i;
	int j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (letters[j] != '\0')
		{
			if (s[i] == letters[j])
			{
				s[i] = nums[j];
			}
			j++;
		}
		i++;
	}

	return (s);
}
