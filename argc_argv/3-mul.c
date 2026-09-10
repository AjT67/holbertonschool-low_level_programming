#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers given as arguments
 * @argc: the number of arguments
 * @argv: the array of argument strings
 *
 * Return: 0 on success, 1 if not exactly two arguments are given
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	printf("%d\n", a * b);

	return (0);
}
