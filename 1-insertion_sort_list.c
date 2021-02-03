#include "sort.h"

/**
* insertion_sort_list - sorts a doubly linked list of integers in
* ascending order using the Insertion sort algorithm
* @list: List to order
* Return : Void - No return
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *aux2 = NULL, *aux_prev = NULL, *aux_next = NULL, *tmp = NULL;
	int wall = 0;

	if (!list || !*list)
		return;

	tmp = *list;

	while (tmp)
	{
		if (tmp->prev != NULL)
		{
			aux2 = tmp;
			wall = 0;
			while (aux2 && aux2->prev->n > aux2->n)
			{
				aux_prev = aux2->prev;
				aux_next = aux2->next;

				if (aux_prev->prev)
					aux_prev->prev->next = aux2;
				else
				{
					*list = aux2;
					wall = 1;
				}
				if (aux_next)
					aux_next->prev = aux_prev;

				aux2->prev = aux_prev->prev;
				aux2->next = aux_prev;
				aux_prev->prev = aux2;
				aux_prev->next = aux_next;
				print_list(*list);
				if (wall)
					break;
			}
		}
		tmp = tmp->next;
	}
}
