#include "main.h"
/**
 * _isupper - determines if int is uppercase character
 * @c: test int
 * Return: 1 if uppercase, 0 if not
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
