#include "main.h"
/**
 * *_strchr - points to first occurrence of char
 * in string or null
 * @s: char pointer
 * @c: chars
 * Return: s or NULL
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
