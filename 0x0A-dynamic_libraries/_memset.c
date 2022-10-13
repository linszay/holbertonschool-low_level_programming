#include "main.h"
/**
 *  *_memset - fills memory area with constant byte
 * @s: char pointer
 * @b: char byte
 * @n: unsigned int
 * Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
