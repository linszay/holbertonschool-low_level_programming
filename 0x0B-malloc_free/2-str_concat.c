#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - concatenates two strings and
 * returns pointer to newly allocated space in
 * memory with contents of s1 and s2 then null terminated
 * @width: columns of array
 * @height: rows of array
 * Return: pointer or null
 */

int **alloc_grid(int width, int height) /* 6 columns and 4 rows*/
{
	int i, j;
	int **arr;

	if (width < 1 || height < 1)
		return (NULL);

	arr = (int **)malloc(sizeof(int *) * height);
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			for (i = 0; i < height; i++)
			{
				free(arr[i]);
			}
			free(arr);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}

	return (arr);
}