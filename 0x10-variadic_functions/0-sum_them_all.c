#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - a function to sum numbers
 *
 * @n: numbers of integers to be summed
 *
 * Return: sum of integers
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int r, i;

	va_list add;

	r = 0;
	i = 0;
	va_start(add, n);


	if (n == 0)
	{
		return (0);
	}
	else
	{
		while (i < n)
		{
			r = r + va_arg(add, int);
			i++;
		}
		va_end(add);
		return (r);
	}
}
