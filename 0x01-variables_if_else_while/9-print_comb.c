#include <stdio.h>
/**
 * main - void
 * putchar - prints combos of single digit #s
 * Return: always 0
*/

int main(void)
{
	int d;

	for (d = 0; d < 10; d++)
	{
		putchar((d % 10) + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
