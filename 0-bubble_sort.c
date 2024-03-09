#include "sort.h"

/**
* bubble_sort - rearranges/sorts the input array *array
*
* @array: input array
* @size: size of  the array array.
*
* Return: No return
*/

void bubble_sort(int *array, size_t size);
{
	size_t i, j;
	int swapped;

	for (i = 0; i < size - 1; i++)
	{
		swapped = 0;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
			int temp = array[j];

			array[j] = array[j + 1];
			array[j + 1] = temp;
			swapped = 1;
			}
		}
		/* if no two elements are swapped; array is already sorted */
		if (swapped == 0)
		{
			break;
		}
	}
}
