#include "holberton.h"
/**
 * string_toupper - changes lowercase letters to upper
 * @s: pointer to string
 * Return: char
*/

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
	}
	return (s);
}