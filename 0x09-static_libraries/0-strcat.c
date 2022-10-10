#include "main.h"
/**
 * *_strcat - appends src to dest string
 * and prints to null character
 * @dest: first string
 * @src: string to be appended
 * Return: dest
*/

char *_strcat(char *dest, char *src)
{
	int destLength, n;

	destLength = 0;
	n = 0;

	while (dest[destLength] != '\0')
	{
		destLength++;
	}
	while (src[n] != '\0')
	{
		dest[destLength] = src[n];
		destLength++;
		n++;
	}
	return (dest);
}
