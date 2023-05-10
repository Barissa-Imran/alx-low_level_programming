#include "search_algos.h"

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
	int i, left, right;

	if (array == NULL)
		return (-1);

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		int mid = left + (right - left) / 2;

		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (i == left)
				printf("%d", array[i]);
			else
				printf(", %d", array[i]);
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}
