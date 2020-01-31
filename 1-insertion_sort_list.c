#include "sort.h"
/**
 * insertion_sort_list - sorts a double linked list in ascending order
 * @**list: double linked list unsorted
 **/

void insertion_sort_list(listint_t **list)
{
	listint_t *index = (*list), *aux, *aux_val;
	int val_idx_next = 0, i = 0, cont = 0, val_idx = 0;

	printf("%d\n", index->n);
	while (index != NULL)
	{
		val_idx = index->n;
		val_idx_next = index->next->n;
		/*printf("%d------%d\n", val_idx, val_idx_next);*/
		if (val_idx > val_idx_next)
		{
			printf("entra al if\n");
			aux_val = index;
			while (val_idx_next > aux_val->n)
			{
				printf("entra al while\n");
				cont++;
				aux_val = aux_val->prev;
				printf("val_idx [%d] y aux_val[%d] y contador [%d]\n", val_idx_next, aux_val->n, cont);
			}
			aux = index->next;
			aux_val = index;
			/*printf("%d------%d\n", aux->n, aux_val->n);*/
			for (; i <= cont; i++)
			{
				aux_val->prev->next = aux;
				aux->next->prev = aux_val;
				aux_val->next = aux->next;
				aux->prev = aux_val->prev;
				aux_val->prev = aux;
				aux->next = aux_val;
				aux_val = aux_val->prev;
			/*	print_list(index);*/		
			}
		}
		index = index->next;
	}
}
