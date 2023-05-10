#incude "search_algos.h"
#include <stddef.h>
/**
 * binary_search - Searches for a value in a sorted array
 * of intergers using binary search.
 * @array: a pointer to the first element of the array to search
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: if the value is not present or the array is Null, -1,
 * otherwise, the index where the value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right;

	if (array == Null)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Serching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}

	return (-1);
}
