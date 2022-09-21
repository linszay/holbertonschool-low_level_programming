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

	if (digit < 0)
	{
		digit = -(digit);
	}
	_putchar(digit + '0');
	return (digit);
}
