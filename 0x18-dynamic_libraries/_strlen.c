#include "main.h"
/**
 * strlen - to calculate the length of a string
 *
 * @s: string which length is to be calculated
 *
 * Return: lenth of string
 *
 */
int _strlen(char *s)
{
	int count;

	count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
