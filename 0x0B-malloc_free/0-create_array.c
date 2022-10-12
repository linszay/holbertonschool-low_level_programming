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
	unsigned int a;
	char *s;

	s = (char *)malloc(size * sizeof(char));
	if (s == NULL)
		return ('\0');
	for (a = 0; a < size; a++)
	{
		s[a] = c;
	}
	return (s);
}