#include "main.h"
/**
 * factorial - a function to find a factorial of a number
 *
 * @n: number inputed
 *
 * Return: factorial of n
 */
int factorial(int n)
{
	int f = 0;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		f = n * factorial(n - 1);
	}
	return (f);
}
