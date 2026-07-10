#include <stdio.h>
/**
 * main - uses putchar to print the lowercase then uppercase alphabet
 * Return: Always 0 (success)
 */
int main(void)
{
	char c;
	char d;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (d = 'A'; d <= 'Z'; d++)
		putchar(d);
	putchar('\n');
	return (0);
}
