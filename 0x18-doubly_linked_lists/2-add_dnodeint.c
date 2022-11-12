#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning
 * of list dlistint_t
 * @head: pointer to the content of first pointer
 * @n: const int
 * Return: address of new element or NULL
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp = NULL, *new_node = NULL;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;

	tmp = *head;
	*head = new_node;
	new_node->next = tmp;

	if (tmp != NULL)
		tmp->prev = *head;

	return (new_node);
}
