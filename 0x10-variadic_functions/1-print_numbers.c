#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
/**
 * print_numbers - a function to print numbers
 *
 * @separator: pointer to separator
 *
 * @n: numbers of variable to be printed
 *
 * Return: void
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;

	va_list print;

	va_start(print, n);

	if (separator == NULL)
	{
		;
	}
	if (separator != NULL)
	{
		while (i < (n - 1))
		{
			printf("%d", va_arg(print, int));
			printf("%s", separator);
			i++;
		}
		if (i == (n - 1))
		{
			printf("%d\n", va_arg(print, int));
		}
		va_end(print);
	}
}
