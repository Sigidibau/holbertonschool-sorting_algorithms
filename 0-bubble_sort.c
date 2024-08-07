#include "sort.h"

/**
 *boubble_sort - function that sorts an array of integers in ascending order
 *@array: pointer to and array
 *@size: size of the array
 */

void boubble_sort(int *array, size_t size)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		if (array[i] > array[i + 1])
		array[i] = array[i + 1];
		print_array(array, size);
	}
		return;
}
