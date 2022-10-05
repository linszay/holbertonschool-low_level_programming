#include "main.h"
/**
 * *_strstr - finds first occurrence of needle in
 * string haystack
 * @haystack: input
 * @needle: input
 * Return: pointer or null
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *hay = haystack;
		char *needle = needle;

		while (*hay == *needle && *needle != '\0')
		{
			hay++;
			needle++;
		}

		if (*needle == '\0')
			return (haystack);
	}

	return ('\0');
}
