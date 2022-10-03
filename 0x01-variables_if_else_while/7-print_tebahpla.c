#include <stdio.h>
/**
 * main - void
 * putchar - printing alphabet in reverse
 * Return: always 0
*/

int main(void)
{
	int i;
	char reverse_alph[] = "zyxwvutsrqponmlkjihgfedcba";

	for (i = 0; i < 26; i++)
	{
		putchar(reverse_alph[i]);
	}
	putchar('\n');
	return (0);
}
