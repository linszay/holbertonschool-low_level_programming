#include "lists.h"
/**
 * print_dlistint - prints all the elements of doubly
 * linked list dlistint_t
 * @h: pointer to list
 * Return: number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
