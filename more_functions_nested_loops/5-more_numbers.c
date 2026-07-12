#include "main.h"

/**
 * more_numbers - prints the numbers 0 through 14, ten times,
 * each set followed by a newline
 *
 * Return: void
 */
void more_numbers(void)
{
	int line;
	int i;

	for (line = 0; line < 10; line++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
				_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}
