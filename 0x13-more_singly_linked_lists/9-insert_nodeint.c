#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: Pointer to the pointer of the head of the list
 * @idx: the index of the list where the new node should be added
 * @n: Value to be added in the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode;
	listint_t *temp = *head;
	unsigned int i;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->n = n;
	newnode->next = NULL;

	if (idx == 0)
	{
		newnode = *head;
		*head = newnode->next;
		return (newnode);
	}
	for (i = 1; i < idx; i++)
	{
		if (temp == NULL)
		{
			free(newnode);
			return (NULL);
		}
		temp = temp->next;
	}
	newnode = temp->next;
	temp->next = newnode->next;
	return (newnode);
}
