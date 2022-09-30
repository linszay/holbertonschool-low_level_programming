#include "holberton.h"
/**
 * *_strncat - concatenates two strings
 * using n bytes from src
 * @dest: first string
 * @src: second string to be appended to dest
 * @n: number of bytes
 * Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n)
	{
		j++;
		dest[i + n] = src[j];
		if (src[j] == '\0')
		{
			j = n;
		}
	}
	return (dest);
}
