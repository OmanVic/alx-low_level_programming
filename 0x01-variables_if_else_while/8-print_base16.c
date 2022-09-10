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

	for (var = '0'; var <= '9'; ++var)
	{
		putchar(var);
	}
	for (var = 'a'; var <= 'f'; ++var)
	{
		putchar(var);
	}
	putchar('\n');
	return (0);
}
