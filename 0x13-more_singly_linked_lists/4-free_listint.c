#include "lists.h"
/**
 * free_listint - frees listint_t
 * @head: pointer to list
*/

void free_listint(listint_t *head)
{
	if (head == NULL)
	{
		return;
	}
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
}
