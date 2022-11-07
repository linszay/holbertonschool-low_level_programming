#include "lists.h"
/**
 * add_node_end - adds a new node to the end of list_t
 * @head: pointer to head
 * @str: pointer to string
 * Return: address of new node or NULL
*/

list_t *add_node_end(list_t **head, const char *str)
{
	int i, count = 0;
	list_t *new;
	list_t *temp;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		count++;

	new->len = i;
	new->str = strdup(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	temp = *head;

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new;

	return (new);
}
