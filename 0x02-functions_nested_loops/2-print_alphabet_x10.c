#include "main.h"
/**
 * print_alphabet_x10 - void
 * _putchar to print function
 * Return: always 0
*/

void print_alphabet_x10(void)
{
	int n;
	int ch;

	for (n = 0; n < 10; n++)

		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
	_putchar('\n');
}
