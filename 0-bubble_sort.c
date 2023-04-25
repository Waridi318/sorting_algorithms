#include "sort.h"

/**
* bubble_sort - sorts an array of integers
* in ascending order using the Bubble sort algorithm
* @array: array to be sorted
* @size: size of array
* Return: 0
*/

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp, flag;

	for (i = 0; i < size - 1; i++)
	{
		if (size < 2)
			break;

		flag = 0;
		for (j = 0; j < (size - 1 - i); j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
				flag = 1;
			}
		}
		if (flag == 0)
			break;
	}
}
