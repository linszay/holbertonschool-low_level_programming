#include "function_pointers.h"
/**
 * int_index - compares values
 * @size: number of elements in the array
 * @array: array
 * @cmp: function pointer
 * Return: 0 or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	if (cmp == NULL)
		return (-1);
	for (index = 0; index < size; index++)
	{
		if ((cmp(array[index])) == 1)
		{
			return (index);
		}
	}
	return (-1);
}
