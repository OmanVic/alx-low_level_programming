#include "main.h"
/**
 * times_table - times numbers
 *
 * Return: void
 *
 */
void times_table(void)
{
	char i, j, n;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			n = i * j;
			putchar(n);
		}
		putchar('\n');
	}
}
