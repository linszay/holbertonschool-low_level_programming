#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n)
 * of linked list listint_t
 * @head: pointer to list
 * Return: sum of all data or 0
 */
int sum_listint(listint_t *head)
{
	int total = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}

	return (total);
}
