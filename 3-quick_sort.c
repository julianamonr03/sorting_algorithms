#include "sort.h"
/**
 * partition - lamuto partition scheme
 * @array: Array of integers
 * @lower: lowest number in the array
 * @higher: Highest number in the array
 * @size: Size of the array
 * Return: index
 */
int partition(int *array, int lower, int higher, int size)
{
	int pivot = array[higher];
	int index = lower;
	int tmp, j = 0;

	for (j = lower; j < higher; j++)
	{
		if (pivot >= array[j])
		{
			if (index != j)
			{
				tmp = array[index];
				array[index] = array[j];
				array[j] = tmp;
				print_array(array, size);
			}
			index++;
		}
	}
	if (index != j)
	{
		tmp = array[index];
		array[index] = array[higher];
		array[higher] = tmp;
		print_array(array, size);
	}
	return (index);
}
/**
 * set_pivot- Function for setting the pivot using recursion
 * @array: Array of integers
 * @size: Size of the array
 * @low: lowest number in the array
 * @high: highest number in the array
 * Return: Void - No return
 */
void set_pivot(int *array, int low, int high, int size)
{
	int pi = 0;

	if (low < high)
	{
		pi = partition(array, low, high, size);

		set_pivot(array, low, pi - 1, size);
		set_pivot(array, pi + 1, high, size);
	}
}

/**
 * quick_sort - Sorts an array of integers in ascending order
 * using the Quick sort algorithm
 * @array: Array of integers
 * @size: Size of the array
 * Return: Void - No return
 */
void quick_sort(int *array, size_t size)
{
	if (size < 2)
	{
		return;
	}
	set_pivot(array, 0, (int)size - 1, (int)size);
}
