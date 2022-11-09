#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: NULL if concatenate fails, otherwise a pointer
 * pointing to a newly allocated space in memory
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int a;
	int b = 0;
	int c = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a] || s2[a]; a++)
		c++;

	concat_str = malloc(sizeof(char) * c);

	if (concat_str == NULL)
		return (NULL);

	for (a = 0; s1[a]; a++)
		concat_str[b++] = s1[a];

	for (a = 0; s2[a]; a++)
		concat_str[b++] = s2[a];

	return (concat_str);
}
