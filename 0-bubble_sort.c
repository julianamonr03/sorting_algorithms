#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending
 * order using the Bubble sort algorithm
 * @array: Array of integers
 * @size: Size of the array
 * Return: Void - No return
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int tmp; /* Temporal variable */

	if (array == NULL || size < 2)
	{
		return;
	}

	/* Travel the array */
	for (i = 0; i < size - 1; i++)
	{
		/* loop for Compare */
		for (j = 0; j < size - i - 1; j++)
		{
			/*
			* if the number in the left is bigger than number
			* in the right swap positions
			*/
			if (array[j] > array[j + 1])
			{
				/* Swap positions */
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}
