#include <stdio.h>
/**
 * print_to_98 - printing numbers to digit 98
 *
 * @n: starting number
 *
 */
void print_to_98(int n)
{
	do {
		printf("%d", n);
		n++;
		if (n > 98)
		{
			break;
		}
	} while (n < 98);
}
