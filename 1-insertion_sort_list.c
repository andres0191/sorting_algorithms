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

/*
* swap_last_node - function that swaps the last node
* @aux_1: pointer to input
* @aux_2: pointer to input
*
* Return: the double linnked list starting from the header
**/

listint_t *swap_last_node(listint_t *aux_1, listint_t *aux_2)
{
	aux_1->next = aux_2;
	aux_1->prev = aux_2->prev;
	aux_2->prev->next = aux_1;
	aux_2->prev = aux_1;
	aux_2->next = NULL;
	while (aux_2->prev)
		aux_2 = aux_2->prev;

	return (aux_2);
}

/**
 * swap_nodes - swaps two nodes form a double linked list
 * @aux_1: pointer to a node
 * @aux_2: pointer to the prevo=ious node
 *
 * Return: double linked list header
 */
listint_t *swap_nodes(listint_t *aux_1, listint_t *aux_2)
{
	aux_2->next = aux_1->next;
	aux_1->next->prev = aux_2;
	aux_2->prev->next = aux_1;
	aux_1->prev = aux_2->prev;
	aux_2->prev = aux_1;
	aux_1->next = aux_2;
	while (aux_2->prev)
	{
		aux_2 = aux_2->prev;
		printf("entra al swap\n");
	}
	printf("valor header lista=[%d]\n", aux_2->n);
	return (aux_2);
}

/**
* swap_nodes - swaps two nodes form a double linked list$
* @aux_1: pointer to a node
* @aux_2: pointer to the prevo=ious node
*
* Return: double linked list header
*/
listint_t *swap_first_node(listint_t *aux_1, listint_t *aux_2)
{
	/*hay q trocar los aux, porque aux 1 es 13(primer valor) y aux_2 es 19 (segundo valor)*/
	printf("aux_2 = [[%d]]\n aux_1 = [[%d]]\n", aux_2->n, aux_1->n);
	aux_2->next = aux_1->next;
	aux_1->next = aux_2;
	aux_1->next->prev = aux_2;
	aux_2->prev = aux_1;
	aux_1->prev = NULL;
	while (aux_2)
	{
		aux_2 = aux_2->prev;
		printf("entra al swap first node\n");
	}
	printf("valor header lista=[%d]\n", aux_2->n);
	return (aux_2);
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
			printf("valor aux_2= [%d]\n valor aux_1=[%d]\n", aux_2->n, aux_1->n);
			if (aux_2->n > aux_1->n && aux_2->prev == NULL && aux_1->next == NULL)
			{
				*list = swap_2_nodes(aux_1, aux_2);
				printf("entra al swap 2\n");
				print_list(*list);
			}
			if (aux_2->n > aux_1->n && aux_2->prev == NULL)
			{
				*list = swap_first_node(aux_1, aux_2);
				print_list(*list);
			}
			if (aux_2->n > aux_1->n && aux_2->prev != NULL)
			{
				if (aux_2->n > aux_1->n && aux_2->next == NULL)
				{
					*list = swap_last_node(aux_1, aux_2);
					printf("entra a swap last node\n");
					print_list(*list);
				}
				else
				{
					*list = swap_nodes(aux_1, aux_2);
					printf("entra a swap nodes\n");
					print_list(*list);
				}
			}
			aux_2 = aux_2->prev;
		}
	aux_1 = aux_1->next;
	aux_2 = aux_1;
	}
}
