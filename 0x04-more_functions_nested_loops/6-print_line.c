#include "main.h"
/**
 * print_line - prints a straight line in terminal
 * @n: test int
 * Return: void
*/

void print_line(int n)
{
	for (n = n; n > 0; n++)
	{
		if (n > 0)
		{
			_putchar('_');
		}
		else
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}