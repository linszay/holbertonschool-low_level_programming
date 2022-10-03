#include <stdio.h>
/**
 * main - void
 * printf - looping to print 1-10
 * Return: always 0
*/

int main(void)
{
	int d;

	for (d = 0; d < 10; d++)
	{
		putchar((d % 10) + '0');
	}
	putchar('\n');

	return (0);
}
