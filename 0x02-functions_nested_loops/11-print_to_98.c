#include <stdio.h>
/**
 * print_to_98 - printing numbers to digit 98
 *
 * @n: starting number
 *
 */
void print_to_98(int n)
{
	while (n < 99)
	{
		printf("%d", n);
		if (n == 98)
		{
			break;
		}
		n++;
	}
	while (n > 97)
	{
		printf("%d", n);
		if (n == 98)
		{
			break;
		}
		n--;
	}
}
