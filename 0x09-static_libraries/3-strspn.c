#include "main.h"

/**
 * _strspn - gets the length of a preix substring
 * @s: string to evaluate
 * @accept: string containing the list of characters to match in s
 * Return:  the number of bytes in the initial segment of
 * s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int j;


	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == *s)
			{
				i++;
				break;
			}

			else if ((accept[j + 1]) == '\0')
				return (i);
		}
		s++;
	}

	return (i);
}
