#include <stdio.h>
/**
 * print_to_98 - printing numbers to digit 98
 *
 * @n: starting number
 *
 */
void print_to_98(int n)
{
	if (n != 98)
	{
		for (; n < 98; n++)
		{
			printf("%d", n);
			printf(",");
			printf(" ");
		}
		for (; n > 98; n--)
		{
			printf("%d", n);
			printf(",");
			printf(" ");
		}
		printf("98\n");
	}
	else if (n == 98)
		printf("98\n");

}
