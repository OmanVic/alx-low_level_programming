#include "main.h"
/**
 * _memcpy - a fuction to copy memory location
 *
 * @dest: destination string
 *
 * @src: sorce string
 *
 * @n: number of bytes to be copy
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
