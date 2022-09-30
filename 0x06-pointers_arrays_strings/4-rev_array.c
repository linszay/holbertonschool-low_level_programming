#include "holberton.h"
/**
 * reverse_array - reverses the contents of an array
 * @a: pointer to array
 * @n: number of elements in the array
 * Return: 0
*/

void reverse_array(int *a, int n)
{
	int i, t;

	for (i = 0; i < n; i++)
	{
		n--;
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}