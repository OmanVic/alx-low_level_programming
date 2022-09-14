#include "main.h"
/**
 * print_last_digit - print last digit of a number
 *
 * Return: always last digit
 *
 * @n: string of number
 *
 */
int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (l < 0)
	{
		l = l * -1;
	}
	else
	{
		l = l;
	}
	_putchar(l);
	_putchar(\n);
	return (l);
}
