#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to a pointer to the first node
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *freenode;

	while (*head)
	{
		freenode = *head;
		*head = (*head)->next;
		free(freenode);
	}
	*head = NULL;
}
