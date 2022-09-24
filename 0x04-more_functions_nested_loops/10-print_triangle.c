#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: value determines the size of triangle
 * Return: int
*/

void print_triangle(int size)
{
	int width, height, location;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (width = 0; width < size; width++)
	{
		for (height = 0; height < (size - width); height++)
		{
			_putchar(' ');
		}
		for (location = 0; location <= width; location++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
