#include "search_algos.h"

/**
 * advanced_binary_search - Searches for a value in a sorted array
 * of integers using binary search.
 * @array: pointer to the first element of the array to search
 * @left: The starting index of the [sub]array to search.
 * @right: The ending index of the [sub]array to search.
 * @value: The value to search for.
 * Return: If value is not present in array or if array is NULL, -1.
 * else,  index where value is located
 */
int advanced_binary_search(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	i = left + (right - left) / 2;
	if (array[i] == value && (i == left || array[i - 1] != value))
		return (i);
	else if (array[i] >= value)
		return (advanced_binary_search(array, left, i, value));
	return (advanced_binary_search(array, i + 1, right, value));
}

/**
 * advanced_binary - Searches for a value in a sorted array
 * of integers using binary search.
 * @array: pointer to the first element of the array to search
 * @size: the number of elements in array
 * @value: The value to search for.
 * Return: If value is not present in array or if array is NULL, -1.
 * else,  index where value is located
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_search(array, 0, size - 1, value));
}
