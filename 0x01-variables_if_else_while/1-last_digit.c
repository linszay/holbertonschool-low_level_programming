#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/** more headers goes there */
/**
 * main: void
 * Description: if loop
 * Return: always 0
*/
/** betty style doc for function main goes there */
int main(void)
{
	char str[] = "Last digit of";
	char is[] = "is";
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* your code goes there */
	if (n > 5)
		printf("%s %d %s and is greater than 5\n", str, n, is);
	else if (n == 0)
		printf("%s %d %s and is 0\n", str, n, is);
	else if (n < 6 && n != 0)
		printf("%s %d %s and is less than 6 and not 0\n", str, n, is);
	return (0);
}
