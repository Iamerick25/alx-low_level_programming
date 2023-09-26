#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: pointer to the start of the node
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *freenode;

	while (head)
	{
		freenode = head;
		head = head->next;
		free(freenode);
	}
}
