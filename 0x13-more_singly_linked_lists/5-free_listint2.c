#include "lists.h"
/**
 * free_listint2 - frees listint_t and sets head to
 * NULL
 * @head: pointer to list
 */
void free_listint2(listint_t **head)
{
	if (!(*head))
		return;

	while (*head)
	{
		listint_t *tmp;

		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}

	head = NULL;
}
