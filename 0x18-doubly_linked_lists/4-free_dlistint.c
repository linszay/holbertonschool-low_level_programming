#include "lists.h"
/**
 * free_dlistint - frees the list dlistint_t
 * @head: pointer to content of the first pointer
 * Return: free list
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = NULL;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
