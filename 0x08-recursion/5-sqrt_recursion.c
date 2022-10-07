#include "main.h"
/**
 * _sqrt - returns square root
 * @i: first int
 * @j: second int
 * Return: square root
*/
int _sqrt(int i, int j)
{
	if (i == (j * j))
		return (j);
	else if (i <= (j * j))
		return (-1);
	else
		return (_sqrt(i, j + 1));
}

/**
 * _sqrt_recursion - returns natural square root
 * of a number
 * @n: int
 * Return: sqrt or -1
*/
int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	return (_sqrt(n, 0));
}
