#include "main.h"
/**
 * times_tables - prints 9 times tables
 * 
 * Return: void
*/

void times_table(void)
{
	int n, m;

	for (n = 0; n <= 9; n++)
	{
		_putchar('0') && (',');

		for (m = 1; m <= 9; m++)
		{
			_putchar(m * n);
		}
	}
	_putchar('\n');
}