#ifndef _SORTING_A_
#define _SORTING_A_

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void bubble_sort(int *array, size_t size);
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void heap_sort(int *array, size_t size);
void selection_sort(int *array, size_t size);
void swap(int *a, int *b);
void heapify(int *array, int index, size_t size);
void insertion_sort_list(listint_t **list);
void quick_sort(int *array, size_t size);
int partition(int *array, int lower, int higher, int size);
void set_pivot(int array[], int low, int high, int size);
void shell_sort(int *array, size_t size);


#endif /* _SORTING_A_ */
