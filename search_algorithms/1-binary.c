#include <stdio.h>

/**
 * binary_search - search for a value in a sorted array using binary search
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index where value is located, or -1 if not found or array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
    
    int left = 0;
    int right = size - 1;
    int i;

    if (array == NULL || size == 0)
    {
        return -1;
    }

    while (left <= right)
    {
        int middle = (left + right) / 2;

        printf("Searching in array: ");
        for (i = left; i <= right; i++)
        {
            if (i == right)
            {
                printf("%d", array[i]);
            }
            else
            {
                printf("%d, ", array[i]);
            }
        }
        printf("\n");

        if (array[middle] == value)
        {
            return middle;
        }
        else if (array[middle] < value)
        {
            left = middle + 1;
        }
        else
        {
            right = middle - 1;
        }
    }

    return -1;
}
