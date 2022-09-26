#include "main.h"
/**
 * _memset - a function thst fills memory with a constant byte
 *
 * @s: first variable
 *
 * @n: second variable
 *
 * @b: constant variable
 *
 * Return: s
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		s[i] = 'b';
	}
	return (s);
}
