#include "main.h"
/**
 * print_line - a function to print line on terminal
 *
 * @n: determines how the line is printed
 *
 * Return: always 0
 *
 */
void print_line(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
