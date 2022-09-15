#include "main.h"
/**
 * print_diagonal - print diagonal
 *
 * @n: parameter
 *
 * Return: 0
 *
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			if (i == j)
			{
				_putchar('\\');
				_putchar('$');
			}
			else
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
