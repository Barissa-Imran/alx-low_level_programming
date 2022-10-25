#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string length to be returned
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int a;

	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}
