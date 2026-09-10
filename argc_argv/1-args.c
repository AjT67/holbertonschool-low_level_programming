#include <stdio.h>

/**
 * main - prints the number of arguments passed to it
 * @argc: the number of arguments
 * @argv: the array of argument strings
 *
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
