#include "sort.h"
/**
 * bubble_sort - function that sorts an array of integers in ascending order.
 * @array: the array we need to sort.
 * @size: the size of the array.
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j, flag;

	if (!array || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		flag = 0;
		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
				flag = 1;
			}
		}
	if (!flag)
		break;
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
