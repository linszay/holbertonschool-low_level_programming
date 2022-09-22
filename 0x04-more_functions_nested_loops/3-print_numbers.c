#include "main.h"
/**
 * print_numbers - prints out numbers 0-9
 * @i: integer for loop
 * Return: void
*/

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
