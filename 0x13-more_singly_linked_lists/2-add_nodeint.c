#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning
 * of listint_t
 * @head: pointer to list
 * @n: const int
 * Return: address of new element or null
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
