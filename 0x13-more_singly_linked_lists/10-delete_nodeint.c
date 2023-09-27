#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: pointer to a pointer to the fisrt node
 * @index: the index of the node that should be deleted. Index starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *newnode, *temp, *prev;
	unsigned int i;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	newnode = *head;
	prev = NULL;
	i = 0;

	while (newnode != NULL && i < index)
	{
		prev = newnode;
		newnode = newnode->next;
		i++;
	}
	if (newnode == NULL)
	{
		return (-1);
	}
	prev->next = newnode->next;
	free(newnode);

	return (1);
}
