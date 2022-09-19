#include <stdio.h>

/**
 * main - void
 * putchar - prints characters
 * Return: always 0
*/

int main(void)
{
	int i;
	char alph[] = "abcdfghijklmnoprstuvwxyz";

	for (i = 0; i < 24; i++)
	{
		putchar(alph[i]);
	}
	putchar('\n');

	return (0);
}
