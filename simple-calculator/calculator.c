#include <stdio.h>

/**
 * main - Calculator
 *
 * All values handled as decimals (double)
 *
 * Return: 0
 */

int main(void)
{
	int c;
	int choice;
	double a, b;

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

		if (choice == 1 || choice == 2 || choice == 3 || choice == 4)
		{
			printf("A: ");
			if (scanf("%lf", &a) != 1)
			{
				while ((c = getchar()) != '\n' && c != EOF)
					;
				printf("Error: invalid number\n");
				printf("Choice: ");
				continue;
			}
			while ((c = getchar()) != '\n' && c != EOF)
				;
			printf("B: ");
			if (scanf("%lf", &b) != 1)
			{
				while ((c = getchar()) != '\n' && c != EOF)
					;
				printf("Error: invalid number\n");
				printf("Choice: ");
				continue;
			}
			if (scanf("%lf", &a) != 1)
                        {
                                while ((c = getchar()) != '\n' && c != EOF)
                                        ;
                                printf("Error: invalid number\n");
                                printf("Choice: ");
                                continue;
                        }
                        while ((c = getchar()) != '\n' && c != EOF)
                                ;

			if (choice == 1)
				printf("Result: %g\n", a + b);
			else if (choice == 2)
				printf("Result: %g\n", a - b);
			else if (choice == 3)
				printf("Result: %g\n", a * b);
			else if (choice == 4)
			{
				if (b == 0)
					printf("Error: division by zero\n");
				else
					printf("Result: %g\n", a / b);
			}
		}
		else
		{
			printf("Invalid choice\n");
		}

		printf("Choice: ");
	}

	printf("Bye!\n");
	return (0);
}
