#include <stdio.h>
/**
 * main - uses putchar to print the alphabet
 * Return: Always 0 (success)
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
