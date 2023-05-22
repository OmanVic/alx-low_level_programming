#include "main.h"
/**
 * _abs - computes absolute value
 *
 * @c: integer number
 *
 * Return: absolute value
 */
int _abs(int c)
{
	if (c < 0)
		return (c * -1);
	else
		return (c);
}
