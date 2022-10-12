#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers or returns 1
 * @argc: argument counter
 * @argv: argument vector
 * Return: result or 1
*/

int main(int argc, char *argv[])
{
	int i, multiplication;

	multiplication = 1;
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		multiplication = multiplication * atoi(argv[i]);
	}
	printf("%d\n", multiplication);
	return (0);
}