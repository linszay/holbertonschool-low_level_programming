#include "main.h"
/**
 * *_memcpy - copies bytes from memory src
 * to memory dest
 * @dest: byte destination
 * @src: input to copy
 * @n: unsigned int
 * Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
