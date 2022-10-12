#include "function_pointers.h"
/**
 * print_name - a function to print a string
 *
 * @name: pointer to the variable name
 *
 * @f: pointer to the functionf
 *
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
