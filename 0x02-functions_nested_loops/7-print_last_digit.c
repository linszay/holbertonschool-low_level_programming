#include "main.h"
/**
 * print_last_digit - prints last digit
 * @n: test integer
 * Return: last digit
*/

int print_last_digit(int n)
{
	int digit;

	if (n < 0)
	{
		digit = (n % 10);
	}
	_putchar(n + '0');
	return (n);
}
