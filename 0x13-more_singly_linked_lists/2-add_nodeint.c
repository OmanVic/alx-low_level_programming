#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * add_nodeint - add node at the beginingbof a list
 *
 * @head: pointer to a variable
 *
 * @n: interger value
 *
 * Return: elments of the node list
 *
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if( *head == NULL)
	{
		new->next = NULL;
		new->n = n;
		*head = new;
	}
	else
	{
		new->n = n;
		new->next = *head;
		*head = new;
	}
	return (*head);
}

