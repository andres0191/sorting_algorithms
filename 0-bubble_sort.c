#include "sort.h"
/**
* bubble_sort - Function that sorts and array of integers
in ascending order using the bubble sort algorithm
* @array: array of de input since main
* @size: size of array
**/
void bubble_sort(int *array, size_t size)
{
    unsigned int a = 0, b = 0;
    size_t i = 0;

    for(i = 0; i <= (size); i++)
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