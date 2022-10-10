#include "main.h"
/**
 * *_strstr - finds first occurrence of needle in
 * string haystack
 * @haystack: input
 * @needle: input
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *temp;
		int i;
		int j = 0;

		temp = haystack;

		for (i = 0; needle[i] < haystack[j] && needle[i] != '\0'; i++)
		{
			j++;

			while (*needle == *haystack)
			{
				haystack++;
				needle++;
			}
			if (*needle == '\0')
				return (temp);
			haystack++;
		}
	}
	return ('\0');
}
