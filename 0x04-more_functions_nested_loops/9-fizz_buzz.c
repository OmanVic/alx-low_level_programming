#include <stdio.h>
/**
 * main - the starting of a program
 *
 * Return: 0
 *
 */
int main(void)
{
	int i = 1;

	while (i <= 99)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz");
			printf(" ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
			printf(" ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
			printf(" ");
		}
		else if ((i % 3 != 0) || (i % 5 != 0))
		{
			printf("%d", i);
			printf(" ");
		}
		i++;
	}
	printf("Buzz\n");
	return (0);
}
