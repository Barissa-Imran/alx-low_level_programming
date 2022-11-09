#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initiates it
 * with a specific char.
 * @size: size of array
 * @c: character
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *ch;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ch = malloc(size * sizeof(c));


	if (ch == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ch[i] = c;

	return (ch);
}
