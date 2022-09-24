#include "main.h"
/**
 * print_square - function prints a square
 * @size: size of the square
 * Return: int
*/

void print_square(int size)
{
	int width, length;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (width = 0; width < size; width++)
	{
		for (length = 0; length < size; length++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
