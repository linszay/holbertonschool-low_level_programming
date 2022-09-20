#include "main.h"
/**
 * int _islower(int c) checks for lowercase char
 * Return: 1 if lowercase, else 0
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
