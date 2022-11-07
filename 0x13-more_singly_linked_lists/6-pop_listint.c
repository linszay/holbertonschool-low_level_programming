#include "lists.h"
/**
 * pop_listint - deletes the head node of listint_t
 * and returns the head node's data (n)
 * @head: pointer to list
 * Return: head node's data or 0
 */
int pop_listint(listint_t **head)
{
	int node_data;

	listint_t *new;

	if (*head == NULL)
		return (0);

	node_data = (*head)->n;

	new = *head;
	*head = (*head)->next;

	free(new);
	return (node_data);
}
