#include "main.h"
/**
 * binary_to_uint - converts a binary number to an
 * unsigned int
 * @b: const char
 * Return: converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int ui = 0;
	int base = 1, i = 0;

	if (b == NULL)
		return (0);

	while (b[i + 1])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}

	while (i >= 0)
	{
		ui += ((b[i] - '0') * base);
		base *= 2;
		i--;
	}

	return (ui);
}
