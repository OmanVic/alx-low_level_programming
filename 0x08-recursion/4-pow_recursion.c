#include "main.h"
/**
 * _pow_recursion - a function to find the power of a number
 *
 * @x: first integer
 *
 * @y: second integer
 *
 * Return: power
 *
 */
int _pow_recursion(int x, int y)
{
	int p = 0;

	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		p = x * _pow_recursion(x, y - 1);
	}
	return (p);
}
