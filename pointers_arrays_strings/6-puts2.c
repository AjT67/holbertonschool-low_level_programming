#include "main.h"

/**
 * puts2 - prints half the string
 * @str: putchar string
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i = (i + 2);
	}
	_putchar('\n');
}
