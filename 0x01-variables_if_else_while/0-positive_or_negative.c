#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers go there */
/**
 * main: void
 * Description: main is void 
 * Return: always 0
*/
/* betty style doc goes there */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if (n < 0)
	{
		return ("$n is positive\n");
	} else if (n == 0)
	{
		return ("$n is zero\n");
	}
	else if (n > 0)
	{
		return ("$n is negative\n");
	}
