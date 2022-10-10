#include "main.h"
/**
 * _strpbrk - Searches a string for any of a set of bytes
 * The _strpbrk() function locates the first occurrence in the string s of any
 * of the bytes in the string accept
 * @s: input pointer
 * @accept: char pointer
 * Return: s or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				return (&s[i]);
			}
		}
	}
	return ('\0');
}
