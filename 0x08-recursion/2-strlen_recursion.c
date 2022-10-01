#include "main.h"
/**
 * _strlen_recursion - a function to print the length of a string
 *
 * @s: string to be printed
 *
 * Return: length of string
 *
 */
int _strlen_recursion(char *s)
{
	int l = 0;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		l = 1 + _strlen_recursion(s + 1);
	}
	return (l);
}
