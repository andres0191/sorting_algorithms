#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order using the Selection sort algorithm
 * @array: array of data of input
 * @size: size of array
 * */
void selection_sort(int *array, size_t size)
{
    size_t i, j, idx, aux;
    int flag = 0;

    for (i = 0; i < (size - 2); i++)
    {
        idx = i;
        for (j = i + 1; j < size; j++)
        {
            if (array[j] < array[idx])
            {
                idx = j;
                flag = 1;
                /* printf("nuevo numero mas peque;o [%d]\n", array[idx]); */
            }
        }
                    if (flag == 1)
            {
                aux = array[idx];
                array[idx] = array[i];
                array[i] = aux;
                print_array(array, size);
                flag = 0;
            }
    }
}