#include "sort.h"

/**
 *
 *
 *
 *
 */

void boubble_sort(int *array, size_t size)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		array[i] = array[i + 1];
		print_array(array, size);
	}
		return;
}
