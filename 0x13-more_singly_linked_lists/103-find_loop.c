#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: pointer to the first node
 *
 * Return: The address of the node where the loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		if (temp < head)
		{
			return (head);
		}
	}
	return (NULL);
}
