#include "main.h"
/**
 * times_table - times numbers
 *
 * Return: void
 *
 */
void times_table(void)
{
	char i, j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			i = i * j;
			putchar(i);
		}
		putchar('\n');
	}
}
