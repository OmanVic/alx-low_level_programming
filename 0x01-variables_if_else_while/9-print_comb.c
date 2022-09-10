#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always return 0
 *
 */
int main(void)
{
	int var;

	for (var = '0'; var <= '9'; var++)
	{
		putchar(var);
		if (var != '9')
		{	putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
