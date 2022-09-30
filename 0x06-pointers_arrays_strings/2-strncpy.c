#include "holberton.h"
/**
 * *_strncpy - copies a string
 * @dest: copy string here
 * @src: string to be copied
 * Return: 0
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	if (i < n)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i++] = '\0';
	}
	return (dest);
}