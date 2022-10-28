#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array to be reversed
 * @n: number of elements in an array
 */
void reverse_array(int *a, int n)
{
	int i;
	int dl;
	int tmp;

	dl = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[dl];
		a[dl--] = tmp;
	}
}
