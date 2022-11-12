#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of
 * the list dlistint_t
 * @head: pointer to the content of first pointer
 * @n: const int
 * Return: address of new element or NULL
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp, *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	tmp = *head;

	if (*head == NULL)
	{
		*head = new_node;
		new_node->prev = NULL;
		return (new_node);
	}

	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}

	tmp->next = new_node;
	new_node->prev = tmp;

	return (new_node);
}
