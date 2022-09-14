#include "main.h"
/**
 * jack_bauer - to print minutes in 24hrs
 *
 * Return - always return 0
 *
 */
void jack_bauer(void)
{
	int m, n, p, o;

	for (m = '0'; m <= '2'; m++)
	{
		for (n = '0'; n <= '9'; n++)
			if (m == '2' && n > '3')
			{
				break;
			}
		{
			for (p = '0'; p <= '5'; p++)
			{
				for (o = '0'; o <= '9'; o++)
				{	_putchar(m);
					_putchar(n);
					_putchar(':');
					_putchar(p);
					_putchar(o);
					_putchar('\n');
				}
			}
		}
	}
}
