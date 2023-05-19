#include "lists.h"
/**
 * insert_dnodeint_at_index - adds a node at a given index in a linked list
 *
 * @h: pointer to the linkedlist
 *
 * @idx: index to be added
 *
 * @n: integer in the new node
 *
 * Return: a linkedlist
 *
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr, *temp, *new;
	unsigned int i = 1;

	ptr = *h;
	temp = *h;

	new = malloc(sizeof(dlistint_t));
	while (i < idx && temp)
	{
		ptr = ptr->next;
		temp = temp->next;
		i++;
	}
	temp = temp->next;

	new->n = n;
	ptr->next = new;
	temp->prev = new;
	new->prev = ptr;
	new->next = temp;
	return (*h);
}

