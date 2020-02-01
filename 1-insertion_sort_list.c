#include "sort.h"
/**
 * insertion_sort_list - sorts a double linked list in ascending order
 * @**list: double linked list unsorted
 **/

void insertion_sort_list(listint_t **list)
{
	listint_t *index = (*list), *aux, *aux_val;
	int val_idx_next = 0, i = 0, cont = 0, val_idx = 0, flag = 0;

	while (index->next)
	{
		val_idx = index->n;
		val_idx_next = index->next->n;
		if (val_idx > val_idx_next)
		{
			aux_val = index;
			while (aux_val->prev && val_idx_next < aux_val->n)
			{
				cont++;
				aux_val = aux_val->prev;
			}
			aux = index->next;
			cont--;
			aux_val = index;
			for (i = 0; i <= cont; i++)
			{
				//preguntar primero si aux_val->prev es null, si lo es, que le asigne el nulo
				aux_val->prev->next = aux;
				aux->next->prev = aux_val;
				aux_val->next = aux->next;
				//preguntar primero si aux_val->prev es null, si lo es, que le asigne el nulo
				aux->prev = aux_val->prev;
				aux_val->prev = aux;
				aux->next = aux_val;
				flag = 1;
				while ((*list)->prev != NULL)
					*list = (*list)->prev;
				print_list(*list);
				aux = aux->prev;
				aux_val = aux_val->prev;

				printf("aux->n: %d\n", aux->n);
				printf("aux_val->n: %d\n", aux_val->n);
				break;
			}
		}
		if (flag == 0)
			index = index->next;
		else
			flag = 0;
	}
}
