#include "lists.h"

/**
 * sum_listint - returns the sum of all the data
 * @head: pointer to the first node
 *
 * Return: 0 (Success)
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
