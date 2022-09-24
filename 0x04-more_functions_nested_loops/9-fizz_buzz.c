#include "main.h"
#include <stdio.h>
/**
 * main - print 1-100 with different output
 * for multiples of 3 and 5
 * Return: void
*/

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	return (0);
}
