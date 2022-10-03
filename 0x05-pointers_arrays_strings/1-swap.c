#include "main.h"
/**
 * swap_int - swaps integers
 * @a: first pointer
 * @b: second pointer
 * Return: integer
*/

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
