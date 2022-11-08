#include "main.h"
/**
 * get_bit - returns the value of a bit at a
 * given index
 * @n: unsigned long int
 * @index: index
 * Return: value of bit at index or 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bits;

	bits = (n >> index) & 1;

	if ((bits == 1) || (bits == 0))
		return (bits);
	else
		return (-1);
}
