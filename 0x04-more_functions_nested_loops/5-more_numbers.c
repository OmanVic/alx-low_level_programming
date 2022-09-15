#include <stdio.h>
/*
 * more_numbers - prints 0 - 14 ten times
 *
 * Return: 0
 *
 */
void more_numbers(void)
{
	int i = '1';

	if (i <= '10')
	{	int n;

		for (n = '0'; n <= '14'; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
		i++;
	}
}
