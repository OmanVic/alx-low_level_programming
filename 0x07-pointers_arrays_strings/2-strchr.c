#include "main.h"
/**
 * _strchr - a function to locate a character in a string
 *
 * @s: string
 *
 * @c: character to be located
 *
 * Return: s
 *
 */
char *_strchr(char *s, char c)
{
	char *new;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			new = s + i;
			break;
		}
		else
		{
			new = '\0';
		}
	}
	return (new);
}
