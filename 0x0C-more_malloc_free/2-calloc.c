#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - allocates memory for an array using
 * malloc
 * @nmemb: length to allocate in the memory
 * @size: size of casting
 * Return: NULL or pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, j;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	j = (nmemb * size);
	p = malloc(j);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < j; i++)
	{
		p[i] = 0;
	}
	return (p);
}
