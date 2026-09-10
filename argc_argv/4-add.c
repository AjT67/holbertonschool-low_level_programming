#include <stdio.h>

/**
 * is_digit - checks whether a string contains only digit characters
 * @s: the string to check
 *
 * Return: 1 if all characters are digits (and s is non-empty), 0 otherwise
 */
int is_digit(char *s)
{
	int i;

	if (s[0] == '\0')
		return (0);

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
	}

	return (1);
}

/**
 * main - adds all positive numbers passed as arguments
 * @argc: the number of arguments
 * @argv: the array of argument strings
 *
 * Return: 0 on success, 1 if an argument contains non-digit characters
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0, num;

	for (i = 1; i < argc; i++)
	{
		if (!is_digit(argv[i]))
		{
			printf("Error\n");
			return (1);
		}

		num = 0;
		for (j = 0; argv[i][j] != '\0'; j++)
			num = num * 10 + (argv[i][j] - '0');

		sum += num;
	}

	printf("%d\n", sum);

	return (0);
}
