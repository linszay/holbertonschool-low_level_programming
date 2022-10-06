#include "main.h"
/**
 * factorial - returns the factorial of given number
 * @n: give number
 * Return: -1 or 0
*/

int factorial(int n)
{
	if (n <= 1)
	{
		return (1);
	}
	else
		return (n * factorial(n - 1));
}