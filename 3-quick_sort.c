#include "sort.h"
/**
 * partition - function thath realize partition the array
 * @array: array of the input
 * @low: size low of array
 * @high: size high of array
 *
 * Return: Always i + 1
 **/
int partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high], i = (low - 1), j = 0;
	int temp = 0;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
			print_array(array, size);
/*
			printf("array[j]=[%d], array[i]=[%d], pivot=[%d]\n", array[j], array[i], pivot);
*/
		}
	}
/*
	if (pivot < array[i + 1] && array[i + 1] != array[j])
	{
*/
	temp = array[i + 1];
	array[i + 1] = array[high];
	array[high] = temp;
	print_array(array, size);
/*
	printf("----array[j]=[%d], array[i]=[%d], pivot=[%d]\n", array[j], array[i], pivot);
*/
	return (i + 1);
}

/**
 * recurtion - function that execute recursion in the porject
* @array: array of the input
 * @low: size low of array
 * @high: size high of array
 * @size: size of array
 **/
void recursion(int *array, int low, int high, size_t size)
{
	int i = 0;

	if (low < high)
	{
		i = partition(array, low, high, size);
		recursion(array, low, i - 1, size);
		recursion(array, i + 1, high, size);
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
		recursion(array, low, high, size);
}
