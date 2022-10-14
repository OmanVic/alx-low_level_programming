#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
/**
 * print_strings: a function to print strings
 *
 * @separator: a pointer to a string
 *
 * @n: number of string present
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *m;

	va_list string;
	unsigned int i = 0;

	va_start(string, n);
	while (i < n)
	{
		m = va_arg(string, char *);
		if (m == NULL)
		{
			m = "(nil)";
		}
		printf("%s", m);

		if (separator != NULL && i < (n - 1))
		{
			printf("%s", separator);
		}
		i++;
	}
	va_end(string);
	printf("\n");
}
