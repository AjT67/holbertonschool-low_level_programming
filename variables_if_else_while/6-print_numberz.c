#include <stdio.h>
/**
 * main - uses putchar to print the alphabet
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		putchar('0' + i);
	putchar('\n');
	return (0);
}
