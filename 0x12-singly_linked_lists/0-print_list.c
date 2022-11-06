#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_list - prints all elements of list_t
 * @h: pointer to list
 * Return: number of nodes or [0] (nil)
*/

size_t print_list(const list_t *h)
{
	int i = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		i++;
	}

	return (i);
}
