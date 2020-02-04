#include "sort.h"
/**
 *
 *
 *
 *
 *
 **/

int partition(int *array, int low, int high)
{
	int pivot = array[high];
	int i = (low - 1), j = 0, aux = 0;
	for (j = low; j < high; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			swap(array[i], array[j]);
		}
	}
	swap(array[i + 1], array[high]);
	return (i + 1);
}
/**
 *
 *
 *
 *
 *
 * */
void quickSort(int array[], int low, int high)
{
	if (low < high)
	{
		int pi = partition(array, low, high);
		quickSort(array, low, pi - 1);
		quickSort(array, pi + 1, high);
	}
}


void swap(int *a, int *b)
{
  int t = *a;
  *a = *b;
  *b = t;
}

/**
* quick_sort - sorts an array of integers in ascending order using the Quick sort algorithm
* @array: array of input for organice with quick_sort function
* @size: size of array
**/
void quick_sort(int *array, size_t size)
{
	int pivot = 0, low = 0, high = 0;
	size_t i = 0;

	if (size < 0 || array == NULL)
		return;
	pivot =  array[size];
	low = array[0];
	high = array[size - 1],

	if (size > 1)
	{
	for (i = 0; array[i] != NULL; i++)
	{
	}
	}
}
    int pivot;
    size_t i = 0;

    pivot =  array;
    if (size > 1)
    {
        for (i = 0; array[i] != NULL; i++)
        {

        }
    }
}
