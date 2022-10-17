#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocated memory using malloc
 * @b: unsigned int
 * Return: pointer or 98
*/

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
