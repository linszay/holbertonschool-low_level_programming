#include "main.h"
/**
 * print_alphabet - void
 * _putchar to print function
 * Return: always 0
*/

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
