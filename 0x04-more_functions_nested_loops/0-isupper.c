#include "main.h"
#include <stdio.h>
/**
 * _isupper - check the case of an alphabet
 *
 * Return: 0 or 1
 *
 * @c: variable to check
 *
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
