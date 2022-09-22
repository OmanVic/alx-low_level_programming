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
	int i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	int j = 0;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
