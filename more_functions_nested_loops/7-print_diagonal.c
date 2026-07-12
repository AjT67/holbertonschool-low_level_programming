#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: the number of times to print the character \
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int row;
	int space;

	for (row = 1; row <= n; row++)
	{
		for (space = 1; space < row; space++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
