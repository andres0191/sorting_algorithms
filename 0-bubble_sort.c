#include "sort.h"
/**
* bubble_sort - sorts and array of integers in ascending order
* @array: array of de input since main
* @size: size of array
**/
void bubble_sort(int *array, size_t size)
{
	unsigned int a = 0, b = 0;
	size_t i = 0, j = 0;

	if (array == NULL || size <= 0)
		return;

	for (j = 0; j < size; j++)
	{
		for (i = 0; i <= (size - 2); i++)
		{
			a = array[i];
			b = array[i + 1];
			if (a > b)
			{
				array[i] = b;
				array[i + 1] = a;
				print_array(array, size);
			}
		}
	}
}
