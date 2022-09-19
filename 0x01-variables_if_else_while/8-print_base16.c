#include <stdio.h>
/**
 * main - void
 * putchar - prints numbers in lowercase
 * Return: always 0
*/

int main(void)
{
	int d;
	char hexidecimal[] = "0123456789abcdef";

	for (d = 0; d < 16; d++)
	{
		putchar(hexidecimal[d]);
	}
	putchar('\n');
	return (0);
}
