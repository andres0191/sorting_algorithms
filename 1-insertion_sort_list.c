#include "sort.h"
/**
* swap_2_nodes - function for swan in two nodes
* @aux1: pointer of input
* @aux2: pointer of input
*
* Return: result of swap in aux_2
**/
listint_t *swap_2_nodes(listint_t *aux_1, listint_t *aux_2)
{
	aux_2->prev = aux_1;
	aux_2->next = NULL;
	aux_2->prev->prev = NULL;
	aux_2->prev->next = aux_2;
	while (aux_2->prev)
		aux_2 = aux_2->prev;
	return (aux_2);
}
/**
* swap_1_node - function for swan in one node
* @aux_1: pointer of input
* @aux_2: pointer of input
*
* Return: result of swap in aux_2
**/
void *swap_1_node(listint_t *aux_1, listint_t *aux_2)
{
	aux_2->next->next->prev = aux_2;
	aux_2->prev = aux_1;
	aux_2->prev->prev = NULL;
	aux_2->next = aux_2->prev->next;
	aux_2->prev->next = aux_2;
	aux_2 = aux_2->prev;
}
				
/**
 * insertion_sort_list - sorts a double linked list in ascending order
 * @**list: double linked list unsorted
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *aux_1 = (*list)->next, *aux_2;
	aux_2 = aux_1;

	while (aux_1 != NULL)
	{
		while (aux_2 != NULL)
		{
			if (aux_2->n > aux_1->n && aux_2->prev == NULL && aux_1->next == NULL)
			{
				*list = swap_2_nodes(aux_1, aux_2);
				print_list(*list);
			}
		if (aux_2->n > aux_1->n && aux_2->prev == NULL)
			{
				*list = swap_1_node(aux_1, aux_2);
				print_list(*list);
			}
/* 			if (aux_2->n > aux_1->n && aux_2->prev != NULL)
			{
				if (aux_2->n > aux_1->n && aux_2->next == NULL)
				{
					(swap ultimo nodo);
					print_list(list);
				}
				else
				{
					(swap mitad);
					print_list(list);					
				}
			} */
		aux_2 = aux_2->prev;
		}
	aux_1 = aux_1->next;
	}
}