#include "lists.h"
/**
 * add_dnodeint - add node at the beginning of a linked list
 *
 * @head: pointer that stores the address of another pointer
 *
 * @n: integer to be added
 *
 * Return: a pointer
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ptr;
	dlistint_t *tmp;

	tmp = *head;
	ptr = malloc(sizeof(dlistint_t));
	ptr->prev = NULL;
	ptr->next = NULL;
	ptr->n = n;

	if (*head)
	{
		tmp->prev = ptr;
		ptr->next = *head;
	}
	*head = ptr;
	return (*head);
}
