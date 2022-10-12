#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns pointer to new string which
 * is a duplicate of str
 * @str: string to be copied
 * Return: NULL
 */
char *_strdup(char *str)
{
	unsigned int i, j;
	char *array;

	if (str == NULL)
		return (NULL);

	for (j = 0; str[j]; j++)
	{
	}

	j += 1;
	array = malloc(sizeof(char) * j);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < j; i++)
		array[i] = str[i];

	return (array);
}
