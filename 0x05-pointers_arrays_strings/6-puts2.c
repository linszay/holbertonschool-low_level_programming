#include "main.h"

/**
 * puts2 - prints out all even characters starting
 *  with 0
 * @str: string of numbers to print
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
