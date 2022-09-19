#include "main.h"
/**
 * print_alphabet - void
*/

void print_alphabet(void)
{
	int n;
	int ch;

	for (n = 0; n < 10; n++)

		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
	_putchar('\n');
}
