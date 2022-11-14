#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of
 * linked list dlistint_t
 * @head: pointer to the content of first pointer
 * @index: unsigned int / index of the node
 * Return: nth node or NULL
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t count = 0;

	while (head != NULL)
	{
		if (count == index)
			break;
		count++;
		head = head->next;
	}

	return (head);
}
