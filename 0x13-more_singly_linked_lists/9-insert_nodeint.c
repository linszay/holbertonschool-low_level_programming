#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a
 * given position in the list
 * @head: pointer to list
 * @idx: position in the list
 * @n: data
 * Return: 0
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;

	listint_t *new;
	listint_t *tmp;

	if (*head == NULL)
		return (NULL);

	tmp = *head;

	while (tmp != NULL)
	{
		if (count == idx - 1)
		{
			new = malloc(sizeof(listint_t));
			if (new == NULL)
			{
				return (NULL);
			}
			else
			{
				new->n = n;
				new->next = tmp->next;
				tmp->next = new;
				return (new);
			}
		}
		if (tmp->next != NULL)
			tmp = tmp->next;
		count++;
	}
	return (NULL);
}
