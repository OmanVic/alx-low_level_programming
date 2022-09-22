#include "main.h"
/**
 * _strncat - a function to concatenate two strings
 *
 * Return: it return a char data type
 *
 * @dest: first variable
 *
 * @n: number
 *
 * @src: second string
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	int j = 0;

	while (j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
