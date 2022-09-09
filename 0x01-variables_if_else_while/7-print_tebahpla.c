#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always return 0
 *
 */
int main(void)
{
	char var;

	for (var = 'z'; var >= 'a'; --var)
	{
		putchar(var);
	}
	putchar('\n');
	return (0);
}
