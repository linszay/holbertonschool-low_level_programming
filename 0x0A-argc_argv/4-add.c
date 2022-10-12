#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds numbers or returns 1 or 0
 * @argc: argument counter
 * @argv: argument vector
 * Return: result or 1 or 0
*/

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			int b;
			char *s;

			s = argv[i];
			for (b = 0; s[b] != '\0'; b++)
			{
				if (s[b] < 48 || s[b] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
		}
	}
	for (i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
