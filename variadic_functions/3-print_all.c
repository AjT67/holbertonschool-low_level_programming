#include "variadic_functions.h"
#include <stdio.h>

/**
 * struct printer - matches a format char to its printer function
 * @type: the format character ('c', 'i', 'f', 's')
 * @f: pointer to the function that prints the arg
 */
typedef struct printer
{
	char type;
	void (*f)(va_list);
} printer_t;

/**
 * print_char - prints a char argument
 * @args: the va_list to pull from
 *
 * Return: void
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - prints an int argument
 * @args: the va_list to pull from
 *
 * Return: void
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - prints a float argument
 * @args: the va_list to pull from
 *
 * Return: void
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - prints a char * argument, or (nil) if NULL
 * @args: the va_list to pull from
 *
 * Return: void
 */
void print_string(va_list args)
{
	char *str = va_arg(args, char *);
	char *options[2];

	options[0] = str;
	options[1] = "(nil)";

	printf("%s", options[str == NULL]);
}

/**
 * print_all - prints anything, based on a format string
 * @format: list of types of arguments passed
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	printer_t ops[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string}
	};
	va_list args;
	unsigned int i = 0, j, printed = 0;

	va_start(args, format);

	while (format != NULL && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == ops[j].type)
			{
				if (printed)
					printf(", ");
				ops[j].f(args);
				printed = 1;
			}
			j++;
		}
		i++;
	}

	va_end(args);

	printf("\n");
}
