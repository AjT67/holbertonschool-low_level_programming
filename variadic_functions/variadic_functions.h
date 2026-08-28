#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdarg.h>

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

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_char(va_list args);
void print_int(va_list args);
void print_float(va_list args);
void print_string(va_list args);
void print_all(const char * const format, ...);

#endif /* VARIADIC_FUNCTIONS_H */