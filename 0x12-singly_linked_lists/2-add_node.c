#include "lists.h"
/**
 * add_node - adds a node to the beginning of list_t
 * @head: pointer to head node
 * @str: pointer to string
 * Return: address of new node or NULL
*/

list_t *add_node(list_t **head, const char *str)
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
