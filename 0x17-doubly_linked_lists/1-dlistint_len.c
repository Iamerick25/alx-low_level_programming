#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: points to beginning of linked list
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int no_nodes;
	const dlistint_t *point;

	if (h == NULL)
		return (0);
	point = h;
	for (no_nodes = 0; point != NULL; no_nodes++)
		point = point->next;
	return (no_nodes);
}
