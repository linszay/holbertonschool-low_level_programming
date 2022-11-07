#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a
 * linked list listint_t
 * @head: pointer to list
 * @index: position in the list
 * Return: nth node or 0
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (count < index)
	{
		if (head->next == NULL)
		{
			return (NULL);
		}
		else
		{
			count++;
			head = head->next;
		}
	}

	return (head);
}
