#include "main.h"
/**
 * _puts - print a string follow with a new line
 *
 * @s: a pointer to the string to be posted
 *
 * Return: None
 *
 */
void _puts(char *s)
{
	int i = 0;

	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
