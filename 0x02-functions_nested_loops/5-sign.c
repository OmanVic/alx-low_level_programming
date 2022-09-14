#include "main.h"
/**
 * print_sign - print the sign of a number
 *
 * Return: 0 or -1
 *
 * @n: checking the sign of a number
 *
 */
int print_sign(int n)
{
	int test;

	if (n > 0)
	{
		_putchar('+');
		test = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		test = 0;
	}
	else if (n < 0)
	{
		_putchar('-');
		test = -1;
	}
	return (test);
}
