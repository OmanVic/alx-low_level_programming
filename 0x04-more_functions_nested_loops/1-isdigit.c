#include "main.h"
/**
 * _isdigit - to check for digits
 *
 * @c: variable
 *
 * Return: either 0 or 1
 *
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
