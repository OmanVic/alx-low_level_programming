#include "main.h"
/**
 * _isalpha - function to
 *
 * @c: 
 *
 * Return: an integer
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
