#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data (n)
 * of linked list dlistint_t
 * @head: pointer to list
 * Return: sum of all data or 0
*/

int sum_dlistint(dlistint_t *head)
{
	size_t sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
