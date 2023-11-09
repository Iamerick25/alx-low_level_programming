#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to the beginning of the linked list
 * @index: the node at this index is to be found
 * Return: pointer to node at index, or NULL if node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n;
	dlistint_t *current;

	if (head == NULL)
		return (NULL);
	current = head;
	for (n = 0; (n < index) && (current != NULL); n++)
		current = current->next;
	if (current == NULL)
		return (NULL);
	else
		return (current);
}
