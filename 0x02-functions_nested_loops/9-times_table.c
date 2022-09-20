#include "main.h"
/**
 * times_tables - prints 9 times tables
 * 
 * Return: void
*/

void times_table(void)
{
	int n, m, l;

	for (n = 0; n <= 9; n++)
	{
		_putchar('0');
		_putchar(',');

		l = n * m;

		if (l <= 9)
			_putchar(' ');
		else
			_putchar((l / 10) + '0');

		_putchar((l % 10) + '0');

		_putchar('\n');
	}
}
