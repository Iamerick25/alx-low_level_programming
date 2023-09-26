#include "lists.h"

/**
* print_listint - prints all the elements of a listint_t list.
* @h: pointer to the first node
*
*
* Return: number of nodes
*/
/* create a templates for the nodes */
size_t print_listint(const listint_t *h)
{
	/* declare a node struct */
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
