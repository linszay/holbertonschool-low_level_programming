#include <stdio.h>
/**
 * main - void
 * putchar - prints combos of single digit #s
 * Return: always 0
*/

int main(void)
{
	int d = 0;
	char digit[] = "0123456789";

	while (d < 10)
	{
		putchar(digit[d]);
		putchar(',');
		putchar(' ');
		d++;
	}
	putchar('\n');
	return (0);
}
