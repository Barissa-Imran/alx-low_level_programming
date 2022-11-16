#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: First string
 * @s2: Second string
 * @n: number of bytes from s2 to concatenate to s1
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int len = 0;
	unsigned int len1 = 0;

	while (s1 && s1[len])
		len++;
	while (s2 && s2[len1])
		len1++;

	if (n < len1)
		s = malloc((len + n + 1) * sizeof(char));
	else
		s = malloc((len + len1 + 1) * sizeof(char));

	if (!s)
		return (NULL);

	while (i < len)
	{
		s[i] = s1[i];
		i++;
	}

	while (n < len1 && i < (len + n))
		s[i++] = s2[j++];

	while (n >= len1 && i < (len1 + len))
		s[i++] = s2[j++];

	s[i] = '\0';

	return (s);
}
