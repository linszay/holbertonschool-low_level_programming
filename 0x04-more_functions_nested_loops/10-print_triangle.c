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
	else
		for (width = 1; width <= size; width++)
		{
			for (height = width; height < size; height++)
			{
				_putchar(' ');
			}
			for (location = 1; location <= width; location++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
}
