#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - add a node at the end of a linked list
 *
 * @head: pointer to a pointer
 *
 * @str: string to be added
 *
 * Return: *head
 *
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *ptr;

	int i = 0;
	new = malloc(sizeof(list_t));
	if ((*head) == NULL)
	{
		*head = new;
	}

	while (str[i] != '\0')
	{
		i++;
	}
	new->str = strdup(str);
	new->len = i;
	new->next = NULL;
	ptr = *head;
	if ((*head) != new)
	{
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = new;
	}
	return (*head);
}
