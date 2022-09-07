#include "sort.h"

/**
  * selection_sort - function that sorts an array
  * of integers in ascending order using the Selection
  * sort algorithm
  * @array: the array to be sorted
  * @size: size of the array
  * Return: void
  */

void selection_sort(int *array, size_t size)
{
	int temp;
	size_t i = 0, j, k;

	for (; i < size; i++)
	{
		k = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[k] > array[j])
				k = j;
		}

		if (i != k)
		{
			temp = array[i];
			array[i] = array[k];
			array[k] = temp;
			print_array(array, size);
		}
	}
}
