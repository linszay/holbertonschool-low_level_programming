#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: This is the string literal
 * @accept: This is the second string
 * Return: k
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	unsigned int k = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				k++;
				break;
			}
		}
		if (accept[j] != s[i])
		{
			break;
		}
	}
	return (k);
}
