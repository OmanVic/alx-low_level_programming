#include "main.h"
/**
 * times_table - times numbers
 *
 * Return: void
 *
 */
void times_table(void)
{
	int i, j, var;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			var = i * j;
			_putchar('0' + var);

		}
		_putchar('\n');
	}
}
