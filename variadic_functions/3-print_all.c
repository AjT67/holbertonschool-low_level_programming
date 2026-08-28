#include "variadic_functions.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * struct printer - matches a format char to its printer function
 * @type: the format character ('c', 'i', 'f', 's')
 * @f: pointer to the function that converts the arg to a string
 */
typedef struct printer
{
	char type;
	char *(*f)(va_list);
} printer_t;

/**
 * print_char - converts a char argument to a malloc'd string
 * @args: the va_list to pull from
 *
 * Return: pointer to the malloc'd string
 */
char *print_char(va_list args)
{
	char *str = malloc(sizeof(char) * 2);

	if (str == NULL)
		return (NULL);

	str[0] = (char)va_arg(args, int);
	str[1] = '\0';

	return (str);
}

/**
 * print_int - converts an int argument to a malloc'd string
 * @args: the va_list to pull from
 *
 * Return: pointer to the malloc'd string
 */
char *print_int(va_list args)
{
	char *str = malloc(sizeof(char) * 12);

	if (str == NULL)
		return (NULL);

	sprintf(str, "%d", va_arg(args, int));

	return (str);
}

/**
 * print_float - converts a float argument to a malloc'd string
 * @args: the va_list to pull from
 *
 * Return: pointer to the malloc'd string
 */
char *print_float(va_list args)
{
	char *str = malloc(sizeof(char) * 50);

	if (str == NULL)
		return (NULL);

	sprintf(str, "%f", va_arg(args, double));

	return (str);
}

/**
 * print_string - converts a char * argument to a malloc'd string
 * @args: the va_list to pull from
 *
 * Return: pointer to the malloc'd string, or "(nil)" copy if NULL
 */
char *print_string(va_list args)
{
	char *str = va_arg(args, char *);
	char *result;

	if (str == NULL)
		str = "(nil)";

	result = malloc(sizeof(char) * (strlen(str) + 1));
	if (result == NULL)
		return (NULL);

	strcpy(result, str);

	return (result);
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
	char *str;

	va_start(args, format);

	while (format != NULL && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == ops[j].type)
			{
				str = ops[j].f(args);
				if (printed)
					printf(", ");
				printf("%s", str);
				free(str);
				printed = 1;
			}
			j++;
		}
		i++;
	}

	va_end(args);

	printf("\n");
}
