#include "lists.h"
/**
 * print_dlistint_backward - prints all the elements
 * of dlistint_t backward
 * @h: pointer to list
 * Return: number of nodes
*/

size_t print_dlistint_backward(const dlistint_t *h)
{
	size_t count = 0;

	if (!h)
		return (0);

	while (h->next)
		h = h->next;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->prev;
		count++;
	}

	return (count);
}
