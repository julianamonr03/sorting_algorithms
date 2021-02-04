#include "sort.h"

/**
 * shell_sort - sorts an array of integers in ascending order
 * @array: Array of integers
 * @size: Size of the array
 * Return - void
 */
void shell_sort(int *array, size_t size)
{
	size_t i, space = 1, j;
	int tmp; /*tmporal variable for swap*/

	if (!array || size < 2)
		return;

	while (space < size / 3)
	{
		space = space * 3 + 1;
	}

	while (space > 0)
	{
		for (i = space; i < size; i++)
		{
			tmp = array[i];
			for (i = space; i < size; i += 1)
			{
				tmp = array[i];

				j = i;
				while (j >= space && array[j - space] > tmp)
				{
					array[j] = array[j - space], j -= space;
				}
				array[j] = tmp;
			}
		}
		print_array(array, size), space = (space - 1) / 3;
	}
}
