#include "3-calc.h"

/**
 * main - performs a simple arithmetic operation on two integers
 * @argc: argument count
 * @argv: argument vector (program name, num1, operator, num2)
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int (*f)(int, int);
	int a, b, result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	f = get_op_func(argv[2]);
	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if ((f == op_div || f == op_mod) && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = f(a, b);
	printf("%d\n", result);

	return (0);
}
