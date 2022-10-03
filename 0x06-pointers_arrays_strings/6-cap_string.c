#include "holberton.h"
/**
 * *cap_string - capitalizes all words of a sing
 * @s: pointer to sing
 * Return: sing
*/

char *cap_string(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
		if (i == 0)
		{
			if ((s[i] >= 'a' && s[i] <= 'z'))
			{
				s[i] -= 32;
			}
		}
		else if (s[i - 1] == ' ' || s[i - 1] == '\t' ||
			 s[i - 1] == '\n' || s[i - 1] == ',' ||
			 s[i - 1] == ';' || s[i - 1] == '.' ||
			 s[i - 1] == '!' || s[i - 1] == '?' ||
			 s[i - 1] == '"' || s[i - 1] == '(' ||
			 s[i - 1] == ')' || s[i - 1] == '{' || s[i - 1] == '}')
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] -= 32;
			}
		}
	}
	return (s);
}
