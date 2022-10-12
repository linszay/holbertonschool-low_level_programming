#include <stdio.h>
/**
 * main - prints file name and newline
 * @argc: argument counter
 * @argv: argument vector
 * Return: void
*/

void main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
}
