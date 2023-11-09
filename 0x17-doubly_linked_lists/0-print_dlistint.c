#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: points to the beginning of the linked list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int no_nodes;
	const dlistint_t *current;

	if (h == NULL)
		return (0);
	current = h;
	for (no_nodes = 0; current != NULL; no_nodes++)
	{
		printf("%i\n", current->n);
		current = current->next;
	}
	return (no_nodes);
}
