#include "main.h"
/**
 * print_last_digit - prints last digit
 * @n: test integer
 * Return: last digit
*/

int print_last_digit(int n)
{
	int digit;

	digit = (n % 10);

	while (digit < 0)
	{
		digit = -(1 * digit);
	}
	_putchar(digit + '0');
	return (digit);
}
