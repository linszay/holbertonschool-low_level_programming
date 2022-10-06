#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints sum of two diagonals
 * of a square matrix of integers
 * @a: int pointer
 * @size: variable
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int i, n, sum = 0, sum2 = 0;

	for (i = 0; i <= (size * size); i = i + size + 1)
		sum = sum + a[i];

	for (n = size - 1; n <= (size * size) - size; n = n + size - 1)
		sum2 = sum2 + a[n];
	printf("%d, %d\n", sum, sum2);
}
