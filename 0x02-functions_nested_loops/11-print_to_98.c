#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints to 98
 * @n: test integer
*/

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (n = 0; n <= 97; n++)
		{
			printf("%d, ", n);
		}
	}
	else
	{
		printf("%d, ", n);
	}
}
