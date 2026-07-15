#include "main.h"

/**
 * rev_string - reverses the string
 * @s: putchar string to reverse
 */
void rev_string(char *s)
{
	int counter;
	int start;
	char temp;
	int len;

	len = 0;
	start = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	counter = (len - 1);

	while (start < counter)
	{
		temp = s[start];
		s[start] = s[counter];
		s[counter] = temp;

		start++;
		counter--;
	}
}
