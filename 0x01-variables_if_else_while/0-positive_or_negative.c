#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers go there */
/*
 * main - printf
 * Return: always 0
*/
/* betty style doc for function main goes there */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if (n < 0)
	{
		printf("$n is positive\n");
	} else if (n == 0)
	{
		printf("$n is zero");
	}
	else if (n > 0)
	{
		printf("$n is negative");
	}
	return (0);
}
