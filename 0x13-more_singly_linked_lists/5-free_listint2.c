#include "lists.h"
/**
 * free_listint2 - frees listint_t and sets head to
 * NULL
 * @head: pointer to list
 */
void free_listint2(listint_t **head)
{
	if (*head == NULL)
		return;

	while (*head)
	{
		free(*head);
		*head = (*head)->next;
	}

	*head = NULL;
}
