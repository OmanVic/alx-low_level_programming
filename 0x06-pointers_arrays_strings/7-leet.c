#include "main.h"
/**
 * leet - a function to encode a string
 *
 * @n: input variable
 *
 * Return: n
 *
 */
char *leet(char *n)
{
	char *x = "AaEeOoTtLl";

	char *y = "4433007711";

	int i, j = 0;

	while (n[i] != '\0')
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] == x[j])
			{
				n[i] = y[j];
			}
		}
		i++;
	}
	return (n);
}
