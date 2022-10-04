#include "holberton.h"
/**
 * *leet - encodes a string into 1337
 * @s: pointer to string
 * Return: s
*/

char *leet(char *s)
{
	int i = 0;
	int j = 0;
	char lower[] = { 'a', 'e', 'o', 't', 'l' };
	char upper[] = { 'A', 'E', 'O', 'T', 'L' };
	char number[] = { '4', '3', '0', '7', '1' };

	while (s[i])
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == lower[j] || s[i] == upper[j])
			{
				s[i] = number[j];
				j++;
			}
		}
		i++;
	}
	return (s);
}
