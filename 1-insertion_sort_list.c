#include "sort.h"
/**
* swap_2_nodes - function for swan in two nodes
* @aux_2: pointer of input
**/
void swap_2_nodes(listint_t *aux_2)
{
	aux_2->next->prev = NULL;
	aux_2->prev = aux_2->next;
	aux_2->next = NULL;
	aux_2->prev->next = aux_2;
}

/**
* swap_last_node - function that swaps the last node of the array
* @aux_2: pointer to input
**/
void swap_last_node(listint_t *aux_2)
{
	aux_2->prev->next = aux_2->next;
	aux_2->next->next = aux_2;
	aux_2->next->prev = aux_2->prev;
	aux_2->prev = aux_2->next;
	aux_2->next = NULL;
}

/**
 * swap_nodes - swaps two nodes form a double linked list
 * @aux_2: pointer to the prevo=ious node
 */
void swap_nodes(listint_t *aux_2)
{
	aux_2->next->next->prev = aux_2;
	aux_2->next->prev = aux_2->prev;
	aux_2->prev = aux_2->next;
	aux_2->next = aux_2->next->next;
	aux_2->prev->prev->next = aux_2->prev;
	aux_2->prev->next = aux_2;
}
/**
* swap_first_node - swaps two nodes form a double linked list
* @aux_2: pointer to the prevo=ious node
*/
void swap_first_node(listint_t *aux_2)
{
	aux_2->prev = aux_2->next;
	aux_2->next->next->prev = aux_2;
	aux_2->next = aux_2->next->next;
	aux_2->prev->prev = NULL;
	aux_2->prev->next = aux_2;
}

/**
 * insertion_sort_list - sorts a double linked list in ascending order
 * @list: double linked list unsorted
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *aux_1, *aux_2;

	if (list != NULL || *list != NULL)
	{
		aux_1 = (*list)->next;
		aux_2 = aux_1;
		while (aux_1 != NULL)
		{
			while (aux_2 != NULL)
			{
				if (aux_2->n > aux_1->n && aux_2->prev == NULL && aux_1->next == NULL)
				{
					swap_2_nodes(aux_2);
					*list = aux_2->prev;
					print_list(*list);
				}
				else if (aux_2->n > aux_1->n && aux_2->prev == NULL)
				{
					swap_first_node(aux_2);
					*list = aux_2->prev;
					print_list(*list);
				}
				else if (aux_2->n > aux_1->n && aux_2->prev != NULL)
				{
					if (aux_2->n > aux_1->n && aux_1->next == NULL)
					{
						swap_last_node(aux_2);
						print_list(*list); }
					else
					{swap_nodes(aux_2), print_list(*list); }
				}
				aux_2 = aux_2->prev;
			}
			aux_1 = aux_1->next;
			aux_2 = aux_1;
		}
	}
}
