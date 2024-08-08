#include "sort.h"

/**
 *boubble_sort - function that sorts an array of integers in ascending order
 *@array: pointer to and array
 *@size: size of the array
 */

void bubble_sort(int *array, size_t size)
{
	int tmp = 0;
	size_t i;
	size_t a;
	for (i = 0; i < size; i++)
	{
		for (a = 0; a < size - 1; a++)
		{
		if (array[a] > array[a + 1])
			{
				tmp = array[a];
				array[a] = array[a + 1];
				array[a + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}
