#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * print_list - prints and count element in a list
 *
 * @h: pointer a variable
 *
 * Return: integer
 *
 */
size_t print_list(const list_t *h)
{
	const list_t *ptr;
	int count = 0;

	ptr = h;
	while (ptr != NULL)
	{
		count++;
		if (ptr->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d]%s\n", ptr->len, ptr->str);
		}
		ptr = ptr->next;
	}
	return (count);
}
