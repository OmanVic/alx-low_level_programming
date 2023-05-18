#include "lists.h"
/**
 * add_dnodeint_end - adds a node at the end of a double linked list
 *
 * @head: head of the linked list
 *
 * @n: integer to be added
 *
 * Return: address of the linked list or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr, *tmp;

	tmp = *head;
	ptr = malloc(sizeof(dlistint_t));
	ptr->next = NULL;
	ptr->prev = NULL;
	ptr->n = n;

	if (tmp == NULL)
	{
		*head = ptr;
		return (*head);
	}
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = ptr;
	ptr->prev = tmp;
	return (*head);
}
