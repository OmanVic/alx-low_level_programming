#include "main.h"
#include <stdlib.h>
/**
 * _strdup - a function to duplicate a string
 *
 * @str: string to be duplicated
 *
 * Return: a pointer
 *
 */
char *_strdup(char *str)
{
	char *p;

	unsigned int i, j;

	if (str == NULL)
		return (NULL);
	i = 0;
	j = 0;

	while (str[i] < '\0')
	{
		j++;
		i++;
	}

	p = (char *) malloc(sizeof(*str) * (j + 1));

	if (p == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		p[i] = str[i];
	}
	return (p);
}
