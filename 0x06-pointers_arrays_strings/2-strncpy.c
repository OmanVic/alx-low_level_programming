#include "main.h"
/**
 * _strncpy - a function to copy string
 *
 * @dest: input variable
 *
 * @src: input variable
 *
 * @n: input variable
 *
 * Return: 0
 *
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
