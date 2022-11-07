#include "lists.h"
/**
 * listint_len - returns the number of elements in
 * linked list lintint_t
 * @h: pointer to list
 * Return: number of elements
*/

size_t listint_len(const listint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
