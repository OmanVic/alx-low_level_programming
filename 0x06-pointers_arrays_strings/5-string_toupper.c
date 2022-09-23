#include "main.h"
/**
 * string_toupper - a function to convert lowercase to uppercase
 *
 * @str: string to be converted to upper case
 *
 * Return: str
 *
 *
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] > 96 && str[i] < 123)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
