#include "lists.h"
/**
 * add_nodeint_end - adds node to the end
 *
 * @head: pointer to a variable
 *
 * @n: an integer variable
 *
 * Return: an integer
 *
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *ptr;

	new = malloc(sizeof(listint_t));
	if (*head == NULL)
	{
		*head = new;
	}
	new->n = n;
	new->next = NULL;
	if (*head != new)
	{
		ptr = *head;
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = new;
	}
	return (*head);
}
