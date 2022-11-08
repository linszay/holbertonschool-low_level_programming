#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at 
 * a given index
 * @n: unsigned long int
 * @index: index
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bits;

	if (n == NULL)
		return (-1);

	bits = 1 << index;

	*n = *n | bits;

	return (1);
}