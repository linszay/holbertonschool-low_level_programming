#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars
 *  and initializes it with a specific char
 * @size: length of the array
 * @c: input character
 * Return: array with specific char
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	s = malloc(sizeof(char) * size);
	if (s == NULL || size == 0)
		return ('\0');
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
