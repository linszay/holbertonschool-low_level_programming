#include "lists.h"
/**
 * free_listint - frees listint_t
 * @head: pointer to list
*/

void free_listint(listint_t *head)
{
	while (head)
	{
		listint_t *tmp;

		tmp = head->next;
		free(head);
		head = tmp;
	}
}
