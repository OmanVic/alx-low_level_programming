#include "main.h"
/**
 * _strcat - function to concatenate two string
 *
 * Return: return 0
 *
 * @dest: first string
 *
 * @src: second string
 *
 */
char *_strcat(char *dest, char *src)
{
	int M, L, n;

	int i = 0;

	if (dest[i] != '\0')
	{
		L = 1 + i;
		i++;
	}
	int j = 0;

	if (src[j] != '\0')
	{
		M = 1 + j;
		j++;
	}
	for (n = 0; n <= (M + 1); n++)
	{
		dest[L + 1 + n] = src[n];
	}
}
