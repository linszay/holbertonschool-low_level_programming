#include "main.h"
/**
 * print_rev - prints a string in reverse followed
 * by a new line
 * @s: string to be printed
 * Return: void
*/

void print_rev(char *s)
{
	int length = 0;
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}

	for (n = (length - 1); n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
