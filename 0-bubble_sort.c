#include "sort.h"

/**
  * bubble_sort - sorts an array of integers in ascending order
  * using the bubble sort algorithm
  * @array: the array to be sorted
  * @size: the size of the array
  * Return: void function
  */

void bubble_sort(int *array, size_t size)
{
	size_t i = 0, temp, ele_idx = 0;

	for (i = 0; i < size; i++)/*loop for traverse the array*/
	{
		for (ele_idx = 0; ele_idx < size - 1; ele_idx++)/*lopp index each element*/
		{
			if (array[ele_idx] > array[ele_idx + 1])/*conditioning the largest element*/
			{
				/*swap the elements*/
				temp = array[ele_idx];
				array[ele_idx] = array[ele_idx + 1];
				array[ele_idx + 1] = temp;
				print_array(array, size);
			}
		}
	}
}


