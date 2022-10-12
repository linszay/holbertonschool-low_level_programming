#include <stdio.h>
/**
 * main - prints number of arguments passed
 * @argc: argument count
 * @argv: argument vector
 * Return: number of arguments
*/

int main(int argc, char *argv[])
{
	int i = 0;

	while (argv[i] != 0)
	{
		printf("%d\n", argc - 1);
		break;
	}
	return (0);
}
