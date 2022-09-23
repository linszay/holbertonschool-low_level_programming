#include "main.h"
/**
 * print_line - prints a straight line in terminal
 * @n: test int
 * Return: void
*/

void print_line(int n)
{
	int times;

	if (n > 0)
	{
		for (times = 0; times < n; times++)
		{
			_putchar('_');
		}
	}
	else
	{
		_putchar('\n');
	}
	_putchar('\n');
}
