#include "main.h"
/**
 * times_tables - prints 9 times tables
 * 
 * Return: void
*/

void times_table(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		_putchar('0' && (n * 1) && (','));
	}
	_putchar('\n');
}