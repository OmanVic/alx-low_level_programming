#include "main.h"
/**
 * _strcpy - copy a string
 *
 * @dest: destination
 *
 * @src: source
 *
 * Return: a ponter to the destination dest
 *
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}
	return (dest);
}
