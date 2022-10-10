#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: pointer for first string
 * @s2: pointer for second string
 * Return: 0 for equal strings, or 1 if not
*/

int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	if (*s1 != *s2)
	{
		return (*s1 - *s2);
	}
	else
		return (0);
}
