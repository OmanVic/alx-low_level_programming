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

	for (var = 'a'; var <= 'z'; ++var)
	{
		putchar(var);
	}
	putchar('\n');
	return (0);
}
