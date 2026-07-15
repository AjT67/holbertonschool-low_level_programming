#include "main.h"

/**
 * puts2 - prints half the string
 * @str: putchar string
 */
void puts2(char *str)
{
	int i;
	int len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	i = 0;
	while (i < len)
	{
		_putchar(str[i]);
		i = (i + 2);
	}
	_putchar('\n');
}
