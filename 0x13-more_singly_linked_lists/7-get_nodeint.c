#include "lists.h"
/**
 * get_nodeint_at_index - function to get a node
 *
 * @head: pointer to a variable
 *
 * @index: index
 *
 * Return: pointer to index n
 *
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	listint_t *ptr = head;

	for (i = 0; i < index; i++)
	{
		ptr = ptr->next;
		if (ptr == NULL)
		{
			return (NULL);
		}
	}
	return (ptr);
}
