#include <stdio.h>
/**
 * print_to_98 - printing numbers to digit 98
 *
 * @n: starting number
 *
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		printf("%d\n", n);
		if (n == 98)
		{
			break;
		}
		n++;
	}
	else if (n > 98)
	{
		printf("%d\n", n);
		if (n == 98)
		{
			break;
		}
		n--;
	}
}
