#include "sort.h"

/**
 * heapify - Heapify the root element again so that we have the
 * highest element at root.
 * @array: Array of integers
 * @index: Index of the array
 * @size: Size of the array
 * Return: Void - No return
 */
void heapify(int *array, int index, size_t size)
{
	int larg = index;
	size_t child_l = 2 * index + 1;
	size_t child_r = 2 * index + 2;

	if (child_l < size && array[child_l] > array[larg])
	{
		larg = child_l;
	}

	if (child_r < size && array[child_r] > array[larg])
	{
		larg = child_r;
	}

	if (larg != index)
	{
		swap(&array[index], &array[larg]);
		heapify(array, larg, size);
	}
}
/**
 * swap - Swap values Function
 * @a: Value
 * @b: Value
 * Return: Void - No return
 */
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * heap_sort - Sorts an array of integers in ascending
 * order using the Heap sort algorithm
 * @array: Array of integers
 * @size: Size of the array
 * Return: Void - No return
 */
void heap_sort(int *array, size_t size)
{
	int i = 0;

	for (i = size / 2 - 1; i >= 0; i--)
	{
		heapify(array, i, size);
		print_array(array, size);
	}

	for (i = size - 1; i >= 0; i--)
	{
		swap(&array[0], &array[i]);
		print_array(array, size);
		/* Put root elem to get highest elem at the root again */
		heapify(array, 0, i);
		print_array(array, size);
	}
}




