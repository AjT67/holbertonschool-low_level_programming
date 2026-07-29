#include "function_pointers.h"
#include <stdlib.h>
/**
* print_name - uses _putchar to print each char in "_putchar"
* @name: The name to print
* @f: The function pointer to use for printing
*
* Return: Always 0 (success)
*/
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
