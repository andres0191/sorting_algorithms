#include "sort.h"
/**
 * shell_sort - array of integers in ascending order using the Shell sort
 * @array: array of input
 * @size: size of array
 **/
void shell_sort(int *array, size_t size)
{
	unsigned int div_array = 0, i = 0, j = 0;
	int aux = 0;

	for (div_array = (size / 2); div_array > 0; div_array /= 2)
	{
		for (i = div_array; i < size; i++)
		{
			aux  = array[i];
			for (j = i; j >= div_array && array[j - div_array] > aux; j -= div_array)
			{
				array[j] = array[j - div_array];

			}
			array[j] = aux;
		}
		print_array(array, size);
	}
}
