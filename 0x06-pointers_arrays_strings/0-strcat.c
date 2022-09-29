#include "holberton.h"
/**
 * _strcat - appends src to dest string 
 * and prints to null character
 * @dest: first string
 * @src: string to be appended
 * Return: char
*/

char *_strcat(char *dest, char *src)
{
	int destLength, n;

	destLength = 0;

	while (dest[destLength] != '\0')
	{
		destLength++;
	}
	for (n = 0; (dest[destLength + n] != '\0'); n++)
	{
		dest[destLength + n] = *src;
		src++;
	}
	return (dest);
}
