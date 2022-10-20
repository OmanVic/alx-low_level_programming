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
	int count = 0;

	while (h != NULL)
	{
		count++;
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d]%s\n", h->len, h->str);
		}
		h = h->next;
	}
	return (count);
}
