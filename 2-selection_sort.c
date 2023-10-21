#include "sort.h"
/**
 * selection_sort - function that sorts an array of integers
 * in ascending order.
 * @array: the array we need to sort.
 * @size: the size of the array.
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, flag;
	int min_index, min_value;

	if (size < 2 || !array)
		return;
	for (i = 0; i < size - 1; i++)
	{
		min_value = array[i];
		flag = 0;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < min_value)
			{
				min_value = array[j];
				min_index = j;
				flag = 1;
			}
		}

		if (flag)
		{
			swap(&array[i], &array[min_index]);
			print_array(array, size);
		}
	}
}

/**
 * swap - funtion that swap two elements.
 * @arr1: the first element.
 * @arr2: second element.
 */
void swap(int *arr1, int *arr2)
{
	int tmp;

	tmp = *arr1;
	*arr1 = *arr2;
	*arr2 = tmp;
}
