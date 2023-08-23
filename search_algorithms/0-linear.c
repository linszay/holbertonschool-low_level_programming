#include "search_algos.h"

/**
 * linear_search - search for a value in an array using linear search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located, or -1 if not found or array is NULL
 */
int linear_search(int *array, size_t size, int value)
{
    if (array == NULL)
    {
        return -1;
    }

    {
        size_t i;

        for (i = 0; i < size; i++)
        {
            printf("Value checked array[%lu] = [%d]\n", i, array[i]);

            if (array[i] == value)
            {
                return (int)i;
            }
        }
    }

    return -1;
}
