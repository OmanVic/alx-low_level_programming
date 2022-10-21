#include "lists.h"
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
/**
 * add_node - a function to add bode at the begining
 *
 * @head: pointer
 *
 * @str: string
 *
 * Return: head
 *
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	int i = 0;

	new = malloc(sizeof(list_t));
	while (*(str + i) != '\0')
	{
		i++;
	}
	new->str = strdup(str);
	new->len = i;
	new->next = *head;
	*head = new;
	if (*head == NULL)
	{
		return (NULL);
	}
	return (*head);
}
