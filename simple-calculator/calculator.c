#include <stdio.h>

/**
 * main - Calculator menu exiting on 0 with flushing leftover input
 *
 * Return: 0
 */

int main(void)
{
	int c;
	int choice;

	printf("Simple Calculator\n");
	printf("1) Add\n");
	printf("2) Subtract\n");
	printf("3) Multiply\n");
	printf("4) Divide\n");
	printf("0) Quit\n");
	printf("Choice:\n");
	while (scanf("%d", &choice) != 1 || choice != 0)
	{
		while ((c = getchar()) != '\n' && c != EOF)
			;
		printf("Invalid choice\n");
		printf("Choice: ");
	}

	printf("Bye!\n");
	return (0);
}
