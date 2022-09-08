#include "sort.h"

/**
  * middle_point - this function rearranges the array,
  * left side less than pivot, right side greater than pivot
  * @array: array to be reorganized
  * @size: size of the array
  * @minor: lower index of the array
  * @major: higher index of the array
  * Return: void
  */

void middle_point(int *array, size_t size, int minor, int major)
{
	int i, j, pivot = 0, temp = 0, pivot_idx = major;

	if (major <= minor)
		return;

	pivot = array[major];

	for (i = minor; i < major; i++)
	{
		if (array[i] > pivot)
		{
			for (j = i + 1; j <= major; j++)
			{
				if (array[j] <= pivot)
				{
					temp = array[j];
					array[j] = array[i];
					array[i] = temp;
					pivot_idx = i;
					print_array(array, size);
					break;
				}
			}
		}
	}
	middle_point(array, size, minor, pivot_idx - 1);
	middle_point(array, size, pivot_idx + 1, major);
}

/**
  * quick_sort - sorts an array of integers
  * in ascending order using the Quick sort algorithm
  * @array: array to be sorted
  * @size: size of the array
  * Return: void
  */

void quick_sort(int *array, size_t size)
{
	middle_point(array, size, 0, (int)size - 1);
}

