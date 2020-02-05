#include "sort.h"
/**
 * swap - functiont that realize swap in the program
 * @a: pointer of input
 * @b: pointer of input
 **/
void swap(int *a, int *b)
{
	int t = *a;

	*a = *b;
	*b = t;
}
/**
 * partition - function thath realize partition the array
 * @array: array of the input
 * @low: size low of array
 * @high: size high of array
 *
 * Return: Always i + 1
 **/
int partition(int *array, int low, int high)
{
	int pivot = array[high], i = (low - 1), j = 0;

	for (j = low; j < high; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			swap(array[i], array[j]);
		}
	}
	if (pivot < array[i + 1])
	{
		swap(array[i + 1], array[high]);
	}
	return (i + 1);
}
/**
 * recurtion - function that execute recursion in the porject
* @array: array of the input
 * @low: size low of array
 * @high: size high of array
 * @size: size of array
 **/
void recurtion(int *array, int low, int high, size_t size)
{
	size_t i;

	if (low <= high)
	{
		i = partition(array, low, high);
		if (i != size)
			recurtion(array, i + 1, high, size);
		if (i > 0)
			recurtion(array, low, i - 1, size);
	}
}

/**
* quick_sort - sorts an array of integers in ascending
* @array: array of input for organice with quick_sort function
* @size: size of array
**/
void quick_sort(int *array, size_t size)
{
	int low = 0, high = size - 1;

	if (array != NULL && size != 0)
		recurtion(array, low, high, size);
}
