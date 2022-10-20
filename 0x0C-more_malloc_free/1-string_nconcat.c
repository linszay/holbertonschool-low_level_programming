#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings with
 * pointer to new space in memory containing s1
 * followed by n bytes of s2 and null terminated
 * If n is <= to length of s2, then use the entire
 * string s2
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 * Return: string or null
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}
	if (n > j)
	{
		n = j;
	}
	p = malloc(((i + n) + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		p[i] = s1[i];
	}
	for (j = 0; j != n; j++)
	{
		p[i] = s2[j];
		i++;
	}
	p[i] = '\0';
	return (p);
}
