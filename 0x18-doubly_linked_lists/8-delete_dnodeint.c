#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at
 * index of dlistint_t
 * @head: pointer to pointer to list
 * @index: index
 * Return: 1 or -1
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *tmp = NULL;

	if (head == NULL || *head == NULL)
		return (-1);

	tmp = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(tmp);
		return (1);
	}
	while (tmp->next != NULL)
	{
		if (count == index)
		{
			tmp->next->prev = tmp->prev;
			tmp->prev->next = tmp->next;
			free(tmp);
			return (1);
		}
		tmp = tmp->next;
		count++;
	}

	return (-1);
}
