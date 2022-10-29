#include "main.h"
/**
 * binary_to_uint - a function to covert binary to base 10
 *
 * @b: pointer to a variable
 *
 * Return: decimal number or 0
 *
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int val, i;

	val = i = 0;
	if (b == NULL)
		return (0);
	while (b[i] == '0' || b[i] == '1')
	{
		val <<= 1;
		val += b[i] - '0';
		i++;
	}
	return (val);

}

