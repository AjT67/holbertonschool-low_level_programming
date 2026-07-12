#include "main.h"

/**
 * print_most_numbers - prints the numbers 0 through 9 except 2 and 4,
 * followed by a newline
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
			continue;
		_putchar(i + '0');
	}
	_putchar('\n');
}
