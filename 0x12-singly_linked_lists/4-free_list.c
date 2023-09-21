#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t list
 * @head: Pointer to the head of the list
 *
 * Return: Nothin
 */
void free_list(list_t *head)
{
	list_t *temp = head;
	list_t *next;

	while (temp != NULL)
	{
		next = temp->next;
		free(temp->str);
		free(temp);

		temp = next;
	}
}
