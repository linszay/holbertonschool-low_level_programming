#include "main.h"
/**
 * print_diagonal - prints lines diagonally
 * @n: test int
 * Return: void
*/

void print_diagonal(int n)
{
	int times, location;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (times = 0; times < n; times++)
	{
		for (location = 0; location < times; location++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}
}
