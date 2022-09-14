#include "main.h"
/**
 * _abs - to print the absolute value of a number
 *
 * Return: always 0
 *
 * @n: change n to its absolute value
 *
 */
int _abs(int n)
{
	if (n > 0)
	{
		n = n * 1;
	}
	else if (n < 0)
	{
		n = n * (-1);
	}
	return (n);
}
